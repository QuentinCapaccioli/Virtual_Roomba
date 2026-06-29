#=======================================================================================#
# Objectif : cree le conteneur Docker pour tout  
# Nom : Quentin Capaccioli
# Date : 29/06/2026
# Derniere modification: creation du Dockerfile version fonctionnelle
#=======================================================================================#

FROM ros:jazzy-ros-base

#====================#
#   Workspace ROS2   #
#====================#
WORKDIR /VirtualRoomba
ENV DEBIAN_FRONTEND=noninteractive

COPY src/ ./src
COPY scripts/ ./scripts
COPY ros_entrypoint.sh /ros_entrypoint.sh

#==============================#
#  Installation dépendances   #
#==============================#
RUN apt-get update \
    && rosdep update \
    && rosdep install --from-paths src --ignore-src -r -y \
    && rm -rf /var/lib/apt/lists/*

#==========================#
#   Build ROS2 workspace   #
#==========================#
RUN . /opt/ros/jazzy/setup.sh \
&& colcon build --symlink-install
RUN chmod +x /ros_entrypoint.sh
ENTRYPOINT ["/ros_entrypoint.sh"]

#======================#
#   Lancement launch   #
#======================#
CMD ["ros2", "launch", "virtual_roomba", "roomba.launch.py"]
