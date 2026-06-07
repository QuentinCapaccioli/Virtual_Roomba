from setuptools import find_packages, setup

package_name = 'virtual_roomba'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='quentin',
    maintainer_email='quentin.capaccioli@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'talker = virtual_roomba.py_robot_core:main',
            'listener = virtual_roomba.py_dashboard_cli:main',
        ],
    },
)
