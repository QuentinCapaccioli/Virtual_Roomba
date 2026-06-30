# 🤖 Roomba Virtuel — Mini-Projet ROS2

## Patch FUTUR
Mettre les fichiers python py_robot_core.py et py_dashboard_cli.py en volume fonctionnel avec simple docker compose up

## Description
Simulation logicielle d'un robot aspirateur virtuel sans interface graphique ni simulateur. Tout se passe dans le terminal. Ce projet met en pratique les notions de base de ROS2 : paramètres, topics et services.

## Notions abordées
| Notion | Utilisation |
|--------|-------------|
| Paramètres | Configuration du `drain_rate` au lancement |
| Topics | Télémétrie du robot publiée à 1 Hz |
| Services | Changer de mode de puissance, démarrer/arrêter le nettoyage |

## Architecture
```
VirtualRoomba/
├── docker-compose.yml
├── Dockerfile
├── .dockerignore
└── src/
    ├── custom_interfaces/
    │   ├── msg/RoombaState.msg
    │   ├── srv/SetPowerMode.srv
    │   ├── srv/ToggleCleaning.srv
    │   └── action/CleanArea.action
    └── virtual_roomba/
        ├── virtual_roomba/
        │   ├── py_robot_core.py
        │   └── py_dashboard_cli.py
        ├── config/
        │   └── roomba_params.yaml
        └── launch/
            └── roomba.launch.py
```

## Interfaces custom

### `RoombaState.msg`
```
float32 battery_level    # Niveau de batterie (0 à 100)
string current_status    # État du robot : "IDLE", "CLEANING" ou "DEAD"
string power_mode        # Mode de puissance : "NORMAL", "ECO" ou "TURBO"
```

### `SetPowerMode.srv`
```
string power_mode        # Mode demandé : "NORMAL", "ECO" ou "TURBO"
---
bool success
string message
```

### `ToggleCleaning.srv`
```
bool start_cleaning      # True = démarrer, False = arrêter
---
bool success
string message
```

## Prérequis
- Ubuntu Noble (24.04)
- ROS2 Jazzy
- Package `custom_interfaces` buildé

## Installation
```bash
git clone <url_du_repo>
cd roomba_virtuel
colcon build
```

## Lancement

**Terminal 1 — Dashboard**
```bash
source install/setup.bash
ros2 launch virtual_roomba roomba.launch.py
```

**Terminal 2 — Cerveau du robot**
```bash
source scripts/commands_roomba.sh
```
Une fois le fichier commands_roomba sourcé, les commandes suivantes deviennent disponibles directement dans le terminal :

| Commande    | Description                     |
|-------------|---------------------------------|
| `turbo`     | mode puissance maximale         |
| `eco`       | mode économie d’énergie         |
| `normal`    | mode standard                   |
| `startclean`| démarrer le nettoyage          |
| `stopclean` | arrêter le nettoyage           |

## Commandes utiles
Les commandes suivantes peuvent être évité en utilisant les alias ci-dessus

**Démarrer le nettoyage**
```bash
ros2 service call /toggle_cleaning custom_interfaces/srv/ToggleCleaning "{start_cleaning: true}"
```

**Arrêter le nettoyage**
```bash
ros2 service call /toggle_cleaning custom_interfaces/srv/ToggleCleaning "{start_cleaning: false}"
```

**Changer le mode de puissance**
```bash
ros2 service call /set_power_mode custom_interfaces/srv/SetPowerMode "{power_mode: 'ECO'}"
ros2 service call /set_power_mode custom_interfaces/srv/SetPowerMode "{power_mode: 'TURBO'}"
ros2 service call /set_power_mode custom_interfaces/srv/SetPowerMode "{power_mode: 'NORMAL'}"
```

**Lancer l'action de nettoyage**
```bash
ros2 action send_goal --feedback /clean_area custom_interfaces/action/CleanArea "{target_area: 10.0}"
```

**Test du monitoring des paramètres**
```bash
ros2 param get /py_robot_core drain_rate
ros2 param set /py_robot_core drain_rate 8.0     # accepté → décharge plus rapide en direct
ros2 param set /py_robot_core drain_rate -1.0    # refusé par le callback de validation
ros2 param set /py_robot_core cleaning_speed 0.0   # refusé (<= 0.0)
```

## Modes de puissance
| Mode | Effet sur drain_rate |
|------|----------------------|
| NORMAL | Taux de référence |
| ECO | Taux × 0.5 |
| TURBO | Taux × 2 |

## Statuts du robot
| Statut | Description |
|--------|-------------|
| IDLE | Robot en attente |
| CLEANING | Robot en train de nettoyer |
| DEAD | Batterie vide |

## Auteur
Quentin Capaccioli — 2026