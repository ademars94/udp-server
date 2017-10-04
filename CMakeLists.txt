cmake_minimum_required(VERSION 3.8)
project(udp_server)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(udp_server ${SOURCE_FILES})