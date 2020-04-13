project(task2)
cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_FLAGS "-std=c++11 -O2")

find_package(OpenCV REQUIRED)

include_directories("/usr/local/include/eigen3")

find_package(Pangolin REQUIRED)

add_executable(disparity disparity.cpp)
target_link_libraries(disparity ${OpenCV_LIBS} ${Pangolin_LIBRARIES})