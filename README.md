# The SPOT Repository, as part of the SMADS Project

This repository hosts Gazebo simulation files for the Boston Dynamics Spot, as well as the software interfaces that allow communication with Spot, via gRPC, over ROS.

# Dependencies

This repo notionally depends on gRPC C++, Spot SDK, among others. Some are included as git-submodules, others should be retrieved independently. For instance, gRPC C++ libraries must be installed locally after compiling from source. This repo *should* still build if you do not have gRPC C++ libs, but the gRPC communication components will not be available.

To install the gRPC C++ dependencies, clone it locally. I used the v1.30.0 version of gRPC repo as:
git clone -b v1.30.0 --recursive https://github.com/grpc/grpc.git

Then follow the instructions to build gRPC with cmake https://github.com/grpc/grpc/blob/master/BUILDING.md#building-with-cmake, namely:
$ mkdir -p cmake/build
$ cd cmake/build
$ cmake ../..
$ make
$ make install

This should make the install findable by CMake. You may also need to install empy (3.3.4 worked) and pyyaml (6.0.1 worked). After that make sure to run generate_protos.sh as in $ ./generate_protos.sh

The above should be enough for CMake and catkin to locate all dependencies

## Run time dependencies

### Gazebo environments
The Gazebo simulations in this repository expect the (ahg_common)[https://github.com/utexas-bwi/ahg_common] package. You should clone it into your workspace before running Gazebo simulations, e.g.

	$ git clone https://github.com/utexas-bwi/ahg_common.git


## ROS dependencies
ROS dependencies are needed to run the ROS packages in this repo. Install them manually or through ROS dep, for example, in the root of your workspace:

	$ rosdep install --from-paths src --ignore-src --rosdistro $ROS_DISTRO -y

## Installation
Clone this repository into a catkinized workspace:

	$ git clone --recurse-submodules https://github.com/utexas-bwi/spot.git

note that we do utilize other repositories as submodules, so ensure those have been correctly fetched: 

	$ cd spot/spot-sdk && ls
	
While in a virtual environment, install the Spot-SDK by running:

	$ pip install spot-sdk/prebuilt/*.whl
	
See the [Spot-SDK Quickstart](https://github.com/utexas-bwi/spot-sdk/blob/master/docs/python/quickstart.md#manage-multiple-python-environments-with-virtualenv) on setting up a virtual environment with the correct version of Python.

## Compiling
Compile with the standard catkin-tools build system:

	$ catkin build spot

## Running

### Gazebo simulation with Navigation

	$ roslaunch spot_gazebo spot_ahg_nav.launch 
