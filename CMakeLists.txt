cmake_minimum_required(VERSION 4.0)
project(MegaKnightsVSTerribleDragons)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(MegaKnightsVSTerribleDragons
        main.cpp
        main.cpp
        Knights.cpp
        Knights.h
        Calvary.cpp
        Calvary.h
        Archer.cpp
        Archer.h
        SwordAndShield.cpp
        SwordAndShield.h)
