#!/bin/bash

:'
echo "Baxter Simulation Installation Begin"

# Install ROS INDIGO
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu trusty main" > /etc/apt/sources.list.d/ros-latest.list'

wget http://packages.ros.org/ros.key -O - | sudo apt-key add -

sudo apt-get update

sudo apt-get install ros-indigo-desktop-full

sudo rosdep init

rosdep update

sudo apt-get install python-rosinstall


# Create Baxter Devel Workspace

mkdir -p ~/ros_ws/src
(cd ~/ros_ws && catkin_make && catkin_make install)


# Install Baxter SDK Dependencies
sudo apt-get update
sudo apt-get install git-core python-argparse python-wstool python-vcstools python-rosdep ros-indigo-control-msgs ros-indigo-joystick-drivers

# Install Baxter Research Robot SDK

(cd ~/ros_ws/src && wstool init . && wstool merge https://raw.githubusercontent.com/RethinkRobotics/baxter/master/baxter_sdk.rosinstall && wstool update)

source /opt/ros/indigo/setup.bash

(cd ~/ros_ws && catkin_make && catkin_make install)

# Configure Baxter Communication/ROS Workspace (Real robot config)
# Go to Step 6 of http://sdk.rethinkrobotics.com/wiki/Workstation_Setup

'
# Install Baxter Simulation
(cd ~/ros_ws/src && wstool init . || wstool merge https://raw.githubusercontent.com/RethinkRobotics/baxter_simulator/master/baxter_simulator.rosinstall && wstool update)
source /opt/ros/indigo/setup.bash
(cd ~/ros_ws && catkin_make && cp src/baxter/baxter.sh .)

# Test Baxter Installation

terminator -e "cd ~/ros_ws && ./baxter.sh sim && roslaunch baxter_gazebo baxter_world.launch"




