cmake_minimum_required(VERSION 3.8)
project(hashCode2018)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-Wall -pedantic-errors -Werror")

set(SOURCE_FILES main.cpp  utility.h Hasher.cpp Ride.cpp Parser.cpp Car.cpp)

add_executable(hashCode2018 ${SOURCE_FILES})
