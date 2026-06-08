import sys
import rclpy
from rclpy.node import Node
from custom_interfaces.msg import RoombaState
from custom_interfaces.srv import SetPowerMode, ToggleCleaning

class Dashboard(Node):
#===================#
#   Etat initial    #
#===================#
    def __init__(self):
        super().__init__('py_dashboard_cli')

        # Subscriber (topic) :
        self.subscription = self.create_subscription(RoombaState, 'roomba_telemetry', self.listener_callback, 10)
        self.subscription # prevent unused variable warning

#===========================#
#   Client set_power_mode   #
#===========================#
        self.set_power_mode_cli = self.create_client(SetPowerMode, 'set_power_mode')
        while not self.set_power_mode_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.set_power_mode_req = SetPowerMode.Request()

#============================#
#   Client toggle_cleaning   #
#============================#
        self.toggle_cleaning_cli = self.create_client(ToggleCleaning, 'toggle_cleaning')
        while not self.toggle_cleaning_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.toggle_cleaning_req = ToggleCleaning.Request()

    def listener_callback(self, msg):
        self.get_logger().info(f'[Dashboard] Status: {msg.current_status} | Battery: {msg.battery_level} | Mode: {msg.power_mode} %/s')

#============================#
#   Request set_power_mode   #
#============================#
    def send_request_cleaning(self, start_cleaning):
        self.toggle_cleaning_req.start_cleaning = start_cleaning
        return self.toggle_cleaning_cli.call_async(self.toggle_cleaning_req)

#=============================#
#   Request toggle_cleaning   #
#=============================#    
    def send_request_power(self, power_mode):
        self.set_power_mode_req.power_mode = power_mode
        return self.set_power_mode_cli.call_async(self.set_power_mode_req)


def main():
    rclpy.init()
    node = Dashboard()

    node.declare_parameter('mode', 'NORMAL')
    node.declare_parameter('start_cleaning', False)

    mode = node.get_parameter('mode').get_parameter_value().string_value
    start_cleaning = node.get_parameter('start_cleaning').get_parameter_value().bool_value

    future_power = node.send_request_power(mode)
    rclpy.spin_until_future_complete(node, future_power)
    node.get_logger().info(f'Power mode response: {future_power.result().message}')

    future_cleaning = node.send_request_cleaning(start_cleaning)
    rclpy.spin_until_future_complete(node, future_cleaning)
    node.get_logger().info(f'Cleaning response: {future_cleaning.result().message}')

    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()