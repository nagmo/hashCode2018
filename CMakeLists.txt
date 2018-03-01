cmake_minimum_required(VERSION 3.8)
project(hashCode2018)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-Wall -pedantic-errors -Werror")

set(SOURCE_FILES main.cpp main.cpp Parser.cpp Parser.h utility.h Hasher.cpp Hasher.h)

add_executable(hashCode2018 ${SOURCE_FILES})
