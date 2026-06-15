#=======================================================================================#
# Objectif : Fichier service de roomba gerant le cerveau du projet 
# Nom : Quentin Capaccioli
# Date : 15/06/2026
# Derniere modification: Ajout ActionServer
#=======================================================================================#

import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import SetParametersResult
from rclpy.action import ActionServer
from rclpy.action.server import GoalResponse
from rclpy.executors import MultiThreadedExecutor

from custom_interfaces.msg import RoombaState
from custom_interfaces.srv import SetPowerMode, ToggleCleaning
from custom_interfaces.action import CleanArea
import time

class RobotCore(Node):
#===================#
#   Etat initial    #
#===================#
    def __init__(self):
        super().__init__('py_robot_core')

        # Parametre Drain rate:
        self.declare_parameter('drain_rate', 1.0)
        self.base_drain_rate = self.get_parameter('drain_rate').get_parameter_value().double_value
        self.drain_rate = self.base_drain_rate
        self.get_logger().info(f'Taux de référence : {self.base_drain_rate} %/s')

        # Parametre Cleaning speed
        self.declare_parameter('cleaning_speed', 1.0)
        self.base_cleaning_speed = self.get_parameter('cleaning_speed').get_parameter_value().double_value
        self.cleaning_speed = self.base_cleaning_speed
        self.get_logger().info(f'Taux de référence : {self.base_cleaning_speed} m²/s')

        # Etat interne initial :
        self.battery_level = 100.0
        self.current_status = 'IDLE'
        self.power_mode = 'NORMAL'

        # Publisher (topic) :
        self.publisher = self.create_publisher(RoombaState, 'roomba_telemetry', 10)

        # Logique du Timer (a chaque tick de 1 s) :
        self.timer = self.create_timer(1.0, self.timer_callback)

        # Service `SetPowerMode` :
        self.create_service(SetPowerMode, 'set_power_mode', self.set_power_mode_callback)
        # Service `ToggleCleaning` :
        self.create_service(ToggleCleaning, 'toggle_cleaning', self.toggle_cleaning_callback)

        # Callback de validation
        self.add_on_set_parameters_callback(self.event_callback)

        # Action server
        self._action_server = ActionServer(
            self,
            CleanArea,
            'clean_area',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback)

#====================================#
#   Conditions amont du clean_area   #
#====================================#
    def goal_callback(self, goal_request):
        if self.current_status == "DEAD":
            self.get_logger().info(f"L'objectif est refusé. Le robot est mort")
            return GoalResponse.REJECT

        elif goal_request.target_area <= 0:
            self.get_logger().info("L'objectif est refusé. La zone cible est nulle")
            return GoalResponse.REJECT

        elif self.current_status == "CLEANING":
            self.get_logger().info(f"L'objectif est refusé. Le robot est déjà en mission de nettoyage")
            return GoalResponse.REJECT

        else:
            self.get_logger().info(f"L'objectif est accepté : {goal_request.target_area} m²")
            return GoalResponse.ACCEPT


#=============================#
#   Execution du clean_area   #
#=============================#
    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')

        # init
        self.base_cleaning_speed = 1.0
        self.base_drain_rate = 1.0
        self.current_status = "CLEANING"

        feedback_msg = CleanArea.Feedback()
        result = CleanArea.Result()
        cleaned_area = 0.0

        # Execution en situation normale
        while cleaned_area < goal_handle.request.target_area:

            # annulation si demande
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                result.success = False
                result.cleaned_area = cleaned_area
                result.message = "annulé"
                self.current_status = 'IDLE'
                return result

            # annulation en cas de batterie vide
            if self.battery_level == 0 and self.current_status == "DEAD":
                goal_handle.abort()
                result.success = False
                result.cleaned_area = cleaned_area
                result.message = "batterie épuisée"
                self.current_status = 'IDLE'
                return result

            # Avancemenent du nettoyage
            cleaned_area += self.cleaning_speed
            
            # Feedback
            feedback_msg.cleaned_area = cleaned_area
            feedback_msg.progress = min((feedback_msg.cleaned_area / goal_handle.request.target_area) * 100.0, 100.0)
            feedback_msg.battery_level = self.battery_level
            goal_handle.publish_feedback(feedback_msg)

            time.sleep(1)
    
        # Fin nominal
        goal_handle.succeed()
        result.success = True
        result.cleaned_area = cleaned_area
        result.message = 'Mission terminée avec succès'
        self.current_status = 'IDLE'
        return result

#==============================#
#   Validation des parametres  #
#==============================#
    def event_callback(self, params):
        for param in params:
            if param.name == 'drain_rate':
                if param.value <= 0.0:
                    return SetParametersResult(
                            successful=False,
                            reason=f"Le paramètre reçu ({param.name}) doit être strictement positif: {param.value}"
                        )
                else:
                    self.get_logger().info(f"Le paramètre ({param.name}) est bien passé à : {param.value}")
                    self.base_drain_rate = float(param.value)

                if self.power_mode == 'NORMAL':
                    self.drain_rate = self.base_drain_rate
                elif self.power_mode == 'TURBO':
                    self.drain_rate = self.base_drain_rate*2.0
                elif self.power_mode == 'ECO':
                    self.drain_rate = self.base_drain_rate*0.5
                self.get_logger().info(f'drain_rate mis à jour : base={self.base_drain_rate}, effectif={self.drain_rate}')
            elif param.name == 'cleaning_speed':
                if param.value <= 0.0:
                    return SetParametersResult(
                            successful=False,
                            reason=f"Le paramètre reçu ({param.name}) doit être strictement positif: {param.value}"
                        )
                else:
                    self.get_logger().info(f"Le paramètre ({param.name}) est bien passé à : {param.value}")
                    self.base_cleaning_speed = float(param.value)
        return SetParametersResult(successful=True)

#===========#
#   Timer   #
#===========#
    def timer_callback(self):
        if self.current_status == 'CLEANING':
            self.battery_level -= self.drain_rate
            if self.battery_level <= 0:
                self.battery_level = 0.0
                self.current_status = 'DEAD'
                self.get_logger().info('Batterie vide, robot mort.')

        # Publication
        msg = RoombaState()
        msg.battery_level = self.battery_level
        msg.current_status = self.current_status
        msg.power_mode = self.power_mode
        self.publisher.publish(msg)

#===============================#
#   Service set_power_mode :    #
#===============================#
    def set_power_mode_callback(self, request, response):
        new_mode = request.power_mode

        # Mode deja actif
        if new_mode == self.power_mode:
            response.success = True
            response.message = f'Mode {new_mode} déjà actif.'
            return response

        # Application du mode
        if new_mode == 'NORMAL':
            self.drain_rate = self.base_drain_rate
            self.cleaning_speed = self.base_cleaning_speed
        elif new_mode == 'ECO':
            self.drain_rate = self.base_drain_rate * 0.5
            self.cleaning_speed = self.base_cleaning_speed * 0.5
        elif new_mode == 'TURBO':
            self.drain_rate = self.base_drain_rate * 2.0
            self.cleaning_speed = self.base_cleaning_speed * 2.0
        else:
            response.success = False
            response.message = f'Mode inconnu : {new_mode}'
            return response

        self.power_mode = new_mode
        response.success = True
        response.message = f'Mode passé à {new_mode}, drain_rate = {self.drain_rate} %/s'
        return response

#===============================#
#   Service toggle_cleaning :   #
#===============================#
    def toggle_cleaning_callback(self, request, response):
        if self.current_status == 'DEAD':
            response.success = False
            response.message = 'Robot mort, impossible de changer le statut.'
            return response

        if request.start_cleaning:
            if self.current_status == 'IDLE':
                self.current_status = 'CLEANING'
                response.success = True
                response.message = 'Nettoyage démarré.'
            else:
                response.success = False
                response.message = f'Impossible de démarrer, statut actuel : {self.current_status}'
        else:
            if self.current_status == 'CLEANING':
                self.current_status = 'IDLE'
                response.success = True
                response.message = 'Nettoyage arrêté.'
            else:
                response.success = False
                response.message = f'Impossible d\'arrêter, statut actuel : {self.current_status}'

        return response


def main():
    rclpy.init()
    node = RobotCore()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    executor.spin()
    rclpy.shutdown()


if __name__ == '__main__':
    main()