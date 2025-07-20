cmake_minimum_required(VERSION 3.10)
project(home_auto C CXX)

set(CMAKE_CXX_STANDARD 11)

# Add include directory for headers
include_directories(include)

# Add all .c and .cpp files in src and subfolders
file(GLOB_RECURSE SOURCES
    src/*.c
    src/*.cpp
)

add_executable(main ${SOURCES})
