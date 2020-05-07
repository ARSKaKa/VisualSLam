cmake_minimum_required(VERSION 2.8)
project(draw_trajectory)

find_package(Pangolin REQUIRED)
message(STATUS ${Pangolin_INCLUDE_DIRS})
include_directories(${Pangolin_INCLUDE_DIRS})

find_package(Sophus REQUIRED)
include_directories(${Sophus_INCLUDE_DIRS})

add_executable(Drawtrajectory draw_trajectory.cpp)
target_link_libraries(Drawtrajectory ${Pangolin_LIBRARIES})
