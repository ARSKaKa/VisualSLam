cmake_minimum_required(VERSION 2.8)
project(trajectoryError)

# 为使用 sophus，需要使用find_package命令找到它
find_package(Sophus REQUIRED)
include_directories(${Sophus_INCLUDE_DIRS})

# Pangolin 
find_package(Pangolin REQUIRED)
include_directories(${Pangolin_INCLUDE_DIRS})

add_executable(trajectoryError trajectoryError.cpp)
target_link_libraries(trajectoryError ${Pangolin_LIBRARIES})