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

    def listener_callback(self, msg):
        self.get_logger().info(f'[Dashboard] Status: {msg.status} | Battery: {msg.battery} | Mode: {msg.mode} %/s')

#=========================#
#   Clients de services   #
#=========================#
    # Client `set_power_mode` :
    self.create_service(SetPowerMode, 'set_power_mode', self.set_power_mode_callback)

    # Client `toggle_cleaning` :
    self.create_service(ToggleCleaning, 'toggle_cleaning', self.toggle_cleaning_callback)


def main():
    rclpy.init()
    node = Dashboard()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()