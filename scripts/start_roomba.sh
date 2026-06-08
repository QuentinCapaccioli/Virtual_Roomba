#!/bin/bash

# Aller à la racine du repo (robuste Git)
PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

source /opt/ros/jazzy/setup.bash
source "$HOME/ros2_ws/install/setup.bash"

LOG_DIR="$PROJECT_ROOT/logs"
mkdir -p "$LOG_DIR"

cleanup() {
    echo "Stopping Roomba..."
    kill $CORE_PID 2>/dev/null
    exit
}

trap cleanup SIGINT SIGTERM

echo "Starting Roomba system..."

# Core (silencieux)
ros2 run virtual_roomba py_robot_core \
    > "$LOG_DIR/core.log" 2>&1 &
CORE_PID=$!

# Dashboard (visible)
ros2 run virtual_roomba py_dashboard_cli

echo "Core PID: $CORE_PID"


# DAMNATION

# console 1
# ros2 run virtual_roomba py_robot_core

# console 2 
# ros2 run virtual_roomba py_dashboard_cli

# console 3
# démarrage
# ros2 service call /toggle_cleaning custom_interfaces/srv/ToggleCleaning "{start_cleaning: true}"
# mode éco
# ros2 service call /set_power_mode custom_interfaces/srv/SetPowerMode "{power_mode: 'ECO'}"
# mode turbo 
# # ros2 service call /set_power_mode custom_interfaces/srv/SetPowerMode "{power_mode: 'TURBO'}"
