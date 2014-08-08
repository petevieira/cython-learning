cmake_minimum_required(VERSION 2.8.3)
project(Grip)

list(APPEND CMAKE_CXX_FLAGS "-std=c++0x -Wall")

add_library(Grip "Grip.cpp" "Grip.h")

add_executable(test test.cpp)
target_link_libraries(test Grip)
