#!/bin/bash

# Chemin du repo (scripts/ → parent)
PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

# ROS setup (important dans chaque terminal)
source /opt/ros/jazzy/setup.bash
source "$HOME/ros2_ws/install/setup.bash"

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