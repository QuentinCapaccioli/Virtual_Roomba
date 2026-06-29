#=======================================================================================#
# Objectif : Fichier client de roomba gerant le dashboard 
# Nom : Quentin Capaccioli
# Date : 15/06/2026
# Derniere modification: Ajout ActionClient
#=======================================================================================#

import sys
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from custom_interfaces.msg import RoombaState
from custom_interfaces.srv import SetPowerMode, ToggleCleaning
from custom_interfaces.action import CleanArea

class Dashboard(Node):
#================#
#  Etat initial  #
#================#
    def __init__(self):
        super().__init__('py_dashboard_cli')

        # Subscriber (topic) :
        self.subscription = self.create_subscription(RoombaState, 'roomba_telemetry', self.listener_callback, 10)
        self.subscription # prevent unused variable warning

        # Instanciation ActionClient
        self._action_client = ActionClient(self, CleanArea, 'clean_area')

#=========================#
#  Client set_power_mode  #
#=========================#
        self.set_power_mode_cli = self.create_client(SetPowerMode, 'set_power_mode')
        while not self.set_power_mode_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.set_power_mode_req = SetPowerMode.Request()

#==========================#
#  Client toggle_cleaning  #
#==========================#
        self.toggle_cleaning_cli = self.create_client(ToggleCleaning, 'toggle_cleaning')
        while not self.toggle_cleaning_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.toggle_cleaning_req = ToggleCleaning.Request()

    def listener_callback(self, msg):
        self.get_logger().info(f'[Dashboard] Status: {msg.current_status} | Battery: {msg.battery_level}% | Mode: {msg.power_mode}')

#=============================#
#  Fonctions du ActionClient  #
#=============================#
    def send_goal(self, order):
        goal = CleanArea.Goal()
        goal.target_area = order

        self._action_client.wait_for_server()

        self._send_goal_future = self._action_client.send_goal_async(goal, feedback_callback=self.feedback_callback)

        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(
            f"[Dashboard] Mission : "
            f"({result.cleaned_area:.1f} m² nettoyés) "
            f"— {result.message}"
        )

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback

        self.get_logger().info(
            f"[Dashboard] Mission : "
            f"{feedback.cleaned_area:.1f} m² nettoyés "
            f"({feedback.progress:.1f} %) — "
            f"Batterie {feedback.battery_level:.1f} %"
        )

#==========================#
#  Request set_power_mode  #
#==========================#
    def send_request_cleaning(self, start_cleaning):
        self.toggle_cleaning_req.start_cleaning = start_cleaning
        return self.toggle_cleaning_cli.call_async(self.toggle_cleaning_req)

#===========================#
#  Request toggle_cleaning  #
#===========================#    
    def send_request_power(self, power_mode):
        self.set_power_mode_req.power_mode = power_mode
        return self.set_power_mode_cli.call_async(self.set_power_mode_req)

#===========================#
#  Callback set_power_mode  #
#===========================#
    def power_response_callback(self, future):
        response = future.result()
        self.get_logger().info(
            f'Power mode response: {response.message}'
        )

#============================#
#  Callback toggle_cleaning  #
#============================#
    def cleaning_response_callback(self, future):
        response = future.result()
        self.get_logger().info(
            f'Cleaning response: {response.message}'
        )

def main():
    rclpy.init()
    node = Dashboard()

    node.declare_parameter('mode', 'NORMAL')
    node.declare_parameter('start_cleaning', False)

# Les lignes commentees ci-dessous sont inutiles durant l'action car elle se lance avec le mode CLEANING et le power mode NORMAL
    #mode = node.get_parameter('mode').get_parameter_value().string_value
    #start_cleaning = node.get_parameter('start_cleaning').get_parameter_value().bool_value

    #future_power = node.send_request_power(mode)
    #future_power.add_done_callback(node.power_response_callback)
    
    #future_cleaning = node.send_request_cleaning(start_cleaning)
    #future_cleaning.add_done_callback(node.cleaning_response_callback)

    node.send_goal(10.0)

    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()