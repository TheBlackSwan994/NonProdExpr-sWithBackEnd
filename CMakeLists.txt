cmake_minimum_required(VERSION 3.27)
project(untitled)

set(CMAKE_CXX_STANDARD 17)
set(BOOST_ROOT "/home/theblackswan/Загрузки/boost_1_84_0")
set(BOOST_LIBRARYDIR "/home/theblackswan/Загрузки/boost_1_84_0/libs")
add_executable(untitled main.cpp
        client.cpp
        client.h
        server.cpp
        server.h
)
