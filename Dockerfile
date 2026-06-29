#=======================================================================================#
# Objectif : cree le conteneur Docker pour le dashboard du roomba  
# Nom : Quentin Capaccioli
# Date : 23/06/2026
# Derniere modification: creation du Dockerfile
#=======================================================================================#
FROM ros:jazzy-ros-base

WORKDIR /VirtualRoomba

#==============================#
#  Installation dépendances   #
#==============================#
# RUN apt update && apt install -y \
RUN apt-get update \
    # python3-pip \
    # python3-colcon-common-extensions \
    && rm -rf /var/lib/apt/lists/*

#====================#
#   Workspace ROS2   #
#====================#

# Copier le code
COPY src/ ./src
COPY scripts/ ./scripts
COPY ros_entrypoint.sh ./ros_entrypoint.sh

#==========================#
#   Build ROS2 workspace   #
#==========================#
RUN . /opt/ros/jazzy/setup.sh \
    && colcon build

COPY ros_entrypoint.sh /ros_entrypoint.sh
RUN chmod +x /ros_entrypoint.sh
ENTRYPOINT ["/ros_entrypoint.sh"]
#========================#
#   Source automatique   #
#========================#
# SHELL ["/bin/bash", "-c"]

# CMD ["bash", "-c", "source /VirtualRoomba/install/setup.bash && ros2 run virtual_roomba py_dashboard_cli"]
# CMD ["bash", "-c", "ros2 run turtlesim turtlesim_node"]
CMD ["ros2", "launch", "virtual_roomba", "roomba.launch.py"]

#=======================================================================================#
# QCA_2026
#=======================================================================================#

# FROM ros:jazzy-ros-base
# # Évite les prompts apt pendant le build
# # ENV DEBIAN_FRONTEND=noninteractive
# WORKDIR /VirtualRoomba
# # 1) On copie d'abord seulement les sources (pour le cache des couches)
# COPY src/ ./src/
# # 2) Installation des dépendances déclarées dans les package.xml
# RUN apt-get update \
# # && rosdep update \
# # && rosdep install --from-paths src --ignore-src -r -y \
# && rm -rf /var/lib/apt/lists/*
# # 3) Build du workspace (source l'env ROS d'abord)
# RUN . /opt/ros/jazzy/setup.sh \
# && colcon build 
# # --symlink-install


# # 4) Sourcing automatique de ROS + du workspace à chaque shell
# # RUN echo "source /opt/ros/jazzy/setup.bash" >> /root/.bashrc \
# # && echo "source /VirtualRoomba/install/setup.bash" >> /root/.bashrc
# # Entrypoint qui source l'environnement avant toute commande
# COPY ros_entrypoint.sh /ros_entrypoint.sh
# RUN chmod +x /ros_entrypoint.sh
# ENTRYPOINT ["/ros_entrypoint.sh"]
# CMD ["ros2", "launch", "virtual_roomba", "roomba.launch.py"]