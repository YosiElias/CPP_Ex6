cmake_minimum_required(VERSION 3.21)
project(Ex6)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ex6 main.cpp source/Game.hpp source/Team.hpp source/Team.cpp source/Leauge.hpp source/Leauge.cpp source/Game.cpp source/Schedule.hpp Test.cpp)
