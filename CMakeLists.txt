cmake_minimum_required(VERSION 3.10)
project(VisionCore)

set(CMAKE_CXX_STANDARD 14)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(VisionCore main.cpp)
target_link_libraries(VisionCore ${OpenCV_LIBS})
