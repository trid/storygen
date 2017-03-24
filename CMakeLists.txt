cmake_minimum_required(VERSION 3.6)
project(storygen)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)

add_subdirectory(common)

add_executable(storygen ${SOURCE_FILES})