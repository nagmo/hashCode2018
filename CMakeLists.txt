cmake_minimum_required(VERSION 3.7)
project(hashCode2018)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-Wall -pedantic-errors -Werror")

<<<<<<< HEAD
set(SOURCE_FILES main.cpp main.cpp Parser.cpp Parser.h utility.h Hasher.cpp Hasher.h Ride.cpp Ride.h Car.cpp Car.h
        Algo.h)
=======
set(SOURCE_FILES main.cpp  utility.h Hasher.cpp Ride.cpp Parser.cpp Car.cpp)
>>>>>>> 31af5212fd7172a30d13b860221b14df1204cdf3

add_executable(hashCode2018 ${SOURCE_FILES})
