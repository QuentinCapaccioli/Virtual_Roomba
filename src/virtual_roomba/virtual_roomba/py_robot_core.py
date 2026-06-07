import rclpy
from rclpy.node import Node
from custom_interfaces.msg import RoombaState
from custom_interfaces.srv import SetPowerMode, ToggleCleaning


class RobotCore(Node):
#===================#
#   Etat initial    #
#===================#
    def __init__(self):
        super().__init__('py_robot_core')

        # Parametre :
        self.declare_parameter('drain_rate', 1.0)
        self.base_drain_rate = self.get_parameter('drain_rate').get_parameter_value().double_value
        self.drain_rate = self.base_drain_rate
        self.get_logger().info(f'Taux de référence : {self.base_drain_rate} %/s')

        # Etat interne initial :
        self.battery = 100.0
        self.status = 'IDLE'
        self.mode = 'NORMAL'

        # Publisher (topic) :
        self.publisher = self.create_publisher(RoombaState, 'roomba_telemetry', 10)

        # Logique du Timer (a chaque tick de 1 s) :
        self.timer = self.create_timer(1.0, self.timer_callback)

        # Service `SetPowerMode` :
        self.create_service(SetPowerMode, 'set_power_mode', self.set_power_mode_callback)
        # Service `ToggleCleaning` :
        self.create_service(ToggleCleaning, 'toggle_cleaning', self.toggle_cleaning_callback)

#===========#
#   Timer   #
#===========#
    def timer_callback(self):
        if self.status == 'CLEANING':
            self.battery -= self.drain_rate
            if self.battery <= 0:
                self.battery = 0.0
                self.status = 'DEAD'
                self.get_logger().info('Batterie vide, robot mort.')

        # Publication
        msg = RoombaState()
        msg.battery = self.battery
        msg.status = self.status
        msg.mode = self.mode
        self.publisher.publish(msg)

#===============================#
#   Service `set_power_mode` :    #
#===============================#
    def set_power_mode_callback(self, request, response):
        new_mode = request.mode

        # Mode deja actif
        if new_mode == self.mode:
            response.success = True
            response.message = f'Mode {new_mode} déjà actif.'
            return response

        # Application du mode
        if new_mode == 'NORMAL':
            self.drain_rate = self.base_drain_rate
        elif new_mode == 'ECO':
            self.drain_rate = self.base_drain_rate * 0.5
        elif new_mode == 'TURBO':
            self.drain_rate = self.base_drain_rate * 2.0
        else:
            response.success = False
            response.message = f'Mode inconnu : {new_mode}'
            return response

        self.mode = new_mode
        response.success = True
        response.message = f'Mode passé à {new_mode}, drain_rate = {self.drain_rate} %/s'
        return response

#===============================#
#   Service `toggle_cleaning` :  #
#===============================#
    def toggle_cleaning_callback(self, request, response):
        if self.status == 'DEAD':
            response.success = False
            response.message = 'Robot mort, impossible de changer le statut.'
            return response

        if request.start_cleaning:
            if self.status == 'IDLE':
                self.status = 'CLEANING'
                response.success = True
                response.message = 'Nettoyage démarré.'
            else:
                response.success = False
                response.message = f'Impossible de démarrer, statut actuel : {self.status}'
        else:
            if self.status == 'CLEANING':
                self.status = 'IDLE'
                response.success = True
                response.message = 'Nettoyage arrêté.'
            else:
                response.success = False
                response.message = f'Impossible d\'arrêter, statut actuel : {self.status}'

        return response


def main():
    rclpy.init()
    node = RobotCore()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()