cmake_minimum_required(VERSION 3.24)



add_executable(25_4_simulyator main.cpp ${MY_UNCLUDE_DIR}/my-operation.h my-operation.cpp)
target_include_directories(25_4_simulyator PUBLIC ${MY_UNCLUDE_DIR})