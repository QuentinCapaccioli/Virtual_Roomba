from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'virtual_roomba'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='quentin',
    maintainer_email='quentin.capaccioli@gmail.com',
    description='Projet Roomba',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'py_robot_core = virtual_roomba.py_robot_core:main',
            'py_dashboard_cli = virtual_roomba.py_dashboard_cli:main',
        ],
    },
)
