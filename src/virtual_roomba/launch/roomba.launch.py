import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument, OpaqueFunction
from ament_index_python.packages import get_package_share_directory

def launch_setup(context, *args, **kwargs):
    shared_directory=get_package_share_directory('virtual_roomba')

    config = os.path.join(
        shared_directory,
        'config',
        'roomba_params.yaml'
    )

    roomba_params=[config]

    drain_rate_overload = LaunchConfiguration('drain_rate').perform(context)
    if drain_rate_overload != '':
        roomba_params.append({'drain_rate': float(drain_rate_overload)})

    robot_core = Node(
            package='virtual_roomba',
            executable='py_robot_core',
            name='py_robot_core',
            parameters=[config]
        )
    
    dashboard_cli = Node(
            package='virtual_roomba',
            executable='py_dashboard_cli',
            name='py_dashboard_cli'
        )
    
    return [robot_core, dashboard_cli]

def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument(
            'drain_rate',
            default_value='',
            description='Surcharge optionnelle du drain_rate'
        ),
        OpaqueFunction(function=launch_setup)
    ])