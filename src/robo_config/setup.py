from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'robo_config'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'config'), glob('config/*.yaml')),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='fsrobo',
    maintainer_email='1653538044@qq.com',
    description='Configuration package for robot control system',
    license='TODO: License declaration',
    tests_require=['pytest'],
    # py_modules=['config_loader'],
    entry_points={
        'console_scripts': [
        ],
    },
)