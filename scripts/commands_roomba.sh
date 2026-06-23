#!/bin/bash

#=======================================================================================#
# Objectif : Script shell definissant les commandes utiles  
# Nom : Quentin Capaccioli
# Date : 23/06/2026
# Derniere modification: Ajout commentaire
#=======================================================================================#

# Chemin du repo (scripts/ → parent)
PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

# ROS setup
source /opt/ros/jazzy/setup.bash
source "$PROJECT_ROOT/install/setup.bash"

echo "Roomba commands loaded from $PROJECT_ROOT/scripts"

turbo() {
    ros2 service call /set_power_mode \
    custom_interfaces/srv/SetPowerMode \
    "{power_mode: TURBO}"
}

eco() {
    ros2 service call /set_power_mode \
    custom_interfaces/srv/SetPowerMode \
    "{power_mode: ECO}"
}

normal() {
    ros2 service call /set_power_mode \
    custom_interfaces/srv/SetPowerMode \
    "{power_mode: NORMAL}"
}

startclean() {
    ros2 service call /toggle_cleaning \
    custom_interfaces/srv/ToggleCleaning \
    "{start_cleaning: true}"
}

stopclean() {
    ros2 service call /toggle_cleaning \
    custom_interfaces/srv/ToggleCleaning \
    "{start_cleaning: false}"
}