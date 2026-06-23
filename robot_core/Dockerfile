#=======================================================================================#
# Objectif : cree le conteneur Docker pour le core du roomba  
# Nom : Quentin Capaccioli
# Date : 23/06/2026
# Derniere modification: creation du dockerfile
#=======================================================================================#
FROM ros:humble-ros-base

#==============================#
#   Installation dépendances   #
#==============================#
RUN apt-get update && apt-get install -y \
    python3-pip \
    python3-colcon-common-extensions \
    && rm -rf /var/lib/apt/lists/*

#====================#
#   Workspace ROS2   #
#====================#
WORKDIR /Virtual_Roomba

# Copier le code
COPY . /Virtual_Roomba

#==========================#
#   Build ROS2 workspace   #
#==========================#
RUN . /opt/ros/humble/setup.sh && \
    colcon build

#========================#
#   Source automatique   #
#========================#
SHELL ["/bin/bash", "-c"]

CMD ["bash", "-c", "source /opt/ros/humble/setup.bash && source /ros2_ws/install/setup.bash && ros2 run virtual_roomba py_robot_core"]