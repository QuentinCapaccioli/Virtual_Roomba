## Architecture -- Un conteneur par node
Exemple d'architecture pour Docker

```
Virtual_Roomba/
├── docker-compose.yml
│
├── robot_core/
│   ├── Dockerfile
│   ├── .dockerignore
│   └── src/
│       ├── custom_interfaces/
│       │   ├── msg/RoombaState.msg
│       │   ├── srv/SetPowerMode.srv
│       │   ├── srv/ToggleCleaning.srv
│       │   └── action/CleanArea.action
│       └── virtual_roomba/
│           └── virtual_roomba/
│               ├── py_robot_core.py
│               └── __init__.py
│
├── dashboard_cli/
│   ├── Dockerfile
│   ├── .dockerignore
│   └── src/
│       ├── custom_interfaces/    ← copie partagée
│       └── virtual_roomba/
│           └── virtual_roomba/
│               ├── py_dashboard_cli.py
│               └── __init__.py
│
├── config/
│   └── roomba_params.yaml
│
└── launch/
    └── roomba.launch.py
```
## Architecture -- Un conteneur globale
```
virtual_roomba_v2.1/
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
        └── virtual_roomba/
            ├── py_robot_core.py
            └── py_dashboard_cli.py
└── config/
    ├── roomba_params.yaml
    └── roomba.launch.py
```