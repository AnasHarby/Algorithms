cmake_minimum_required(VERSION 3.6)
project(Algorithms_DataStructures)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        disjoint_set.cpp
        disjoint_set.h
        dp.cpp
        dp.h
        graph.cpp
        graph.h
        Main.cpp
        searching_sorting.cpp
        searching_sorting.h
        segment_tree.cpp
        segment_tree.h)

add_executable(Algorithms_DataStructures ${SOURCE_FILES})