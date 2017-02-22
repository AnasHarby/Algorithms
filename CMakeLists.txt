cmake_minimum_required(VERSION 3.6)
project(Algorithms_DataStructures)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        src/disjoint_set.cpp
        src/disjoint_set.h
        src/dp.cpp
        src/dp.h
        src/graph.cpp
        src/graph.h
        src/Main.cpp
        src/searching_sorting.cpp
        src/searching_sorting.h
        src/segment_tree.cpp
        src/segment_tree.h)

add_executable(Algorithms_DataStructures ${SOURCE_FILES})