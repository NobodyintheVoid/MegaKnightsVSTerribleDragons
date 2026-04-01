cmake_minimum_required(VERSION 4.0)
project(MegaKnightsVSTerribleDragons)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(MegaKnightsVSTerribleDragons
        Knights.h
        main.cpp
        main.cpp
        Game.cpp
        Knights.cpp
        SwordAndShield.cpp
        SwordAndShield.h
        Calvary.h
        Calvary.cpp
        Archer.h
        Archer.cpp)
