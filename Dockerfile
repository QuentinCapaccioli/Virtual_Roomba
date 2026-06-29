#=======================================================================================#
# Objectif : cree le conteneur Docker pour le dashboard du roomba  
# Nom : Quentin Capaccioli
# Date : 23/06/2026
# Derniere modification: creation du Dockerfile
#=======================================================================================#
FROM ros:jazzy-ros-base

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
WORKDIR /VirtualRoomba

# Copier le code
COPY . /VirtualRoomba/

#==========================#
#   Build ROS2 workspace   #
#==========================#
RUN . /opt/ros/jazzy/setup.sh && \
    colcon build

#========================#
#   Source automatique   #
#========================#
SHELL ["/bin/bash", "-c"]

CMD ["bash", "-c", "ros2 launch virtual_roomba roomba.launch.py"]