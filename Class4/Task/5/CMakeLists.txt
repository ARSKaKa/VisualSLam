cmake_minimum_required(VERSION 2.8)
project(Task3)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS "-std=c++14 -O3")

# OpenCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# Eigen
include_directories("/usr/include/eigen3")

add_executable(gaussNewton gaussnewton.cpp)
target_link_libraries(gaussNewton ${OpenCV_LIBS})