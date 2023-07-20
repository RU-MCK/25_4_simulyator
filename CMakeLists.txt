cmake_minimum_required(VERSION 3.24)
project(25_4_simulyator VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/unclude)

add_executable(25_4_simulyator src/main.cpp include/my-operation.h src/my-operation.cpp)
target_include_directories(25_4_simulyator PUBLIC include)
#add_subdirectory(src)