from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='virtual_roomba',
            executable='py_dashboard_cli',
            name='py_dashboard_cli',
            parameters=[{'mode': 'NORMAL', 'start_cleaning': False}]
        ),
        Node(
            package='virtual_roomba',
            executable='py_robot_core',
            name='py_robot_core',
            parameters=[{'drain_rate': 1.0}]
        ),
    ])