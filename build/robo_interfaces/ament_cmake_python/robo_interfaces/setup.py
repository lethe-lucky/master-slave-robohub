from setuptools import find_packages
from setuptools import setup

setup(
    name='robo_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('robo_interfaces', 'robo_interfaces.*')),
)
