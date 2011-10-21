#Top-Level CmakeLists.txt

cmake_minimum_required(VERSION 2.6)

PROJECT(PERCEPT)

find_package(GLUT)
find_package(OpenGL)
find_package(OpenCV)
set(CMAKE_CXX_FLAGS "-g -Wall")

ADD_SUBDIRECTORY( src )
#ADD_SUBDIRECTORY( Test )