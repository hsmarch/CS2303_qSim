cmake_minimum_required(VERSION 3.9)
project(qSim_hsmarch)

set(CMAKE_CXX_STANDARD 11)

add_executable(qSim_hsmarch qSim.cpp Event.cpp Event.h EventQueue.cpp EventQueue.h CustomerEvent.cpp CustomerEvent.h TellerEvent.cpp TellerEvent.h)