cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

# Set C++11 standard
add_definitions(-std=c++11)

set(CMAKE_BUILD_TYPE Debug)

# Project name
project(Mod4Lab)

# Add the executable
add_executable(Mod4Lab main.cpp conductor.cpp jupiter.cpp leCygne.cpp newWorldSymphony.cpp orchestra.cpp songChoice.cpp time.cpp song.cpp)