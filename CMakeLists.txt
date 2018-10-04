# cmake_minimum_required(VERSION <specify CMake version here>)
project(UltraTerminal)

set(CMAKE_CXX_STANDARD 17)

add_executable(UltraTerminal main.cpp Server.cpp Server.h)