from setuptools import find_packages, setup

package_name = 'robo_follower'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools', 'robo_config'],
    zip_safe=True,
    maintainer='fsrobo',
    maintainer_email='1653538044@qq.com',
    description='robo_follower node for two-way control system',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'follower = robo_follower.robo_follower:main',
        ],
    },
)
