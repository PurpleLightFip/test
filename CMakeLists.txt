cmake_minimum_required (VERSION 2.8.12)

project(iron_learning CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")
set(SOURCE_EXE main.cpp)

include_directories(src)

add_executable(main ${SOURCE_EXE})

add_subdirectory(src)

target_link_libraries(main lib)

