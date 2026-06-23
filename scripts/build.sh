#!/bin/bash

#=======================================================================================#
# Objectif : Script shell le build du projet permettant de regrouper les fichiers generes dans /gen  
# Nom : Quentin Capaccioli
# Date : 23/06/2026
# Derniere modification: Creation script
#=======================================================================================#

colcon build \
  --build-base gen/build \
  --install-base gen/install \
  --log-base gen/log