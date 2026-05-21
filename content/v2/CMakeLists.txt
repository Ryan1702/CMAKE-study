cmake_minimum_required(VERSION 3.15)
project(MyFirstProject)

# 在做下述操作前需要把main.cpp去掉或者移到src外面
file(GLOB SRC_FUN ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
include_directories(${PROJECT_SOURCE_DIR}/include)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
add_library(calc SHARED ${SRC_FUN})
# 静态库STATIC 动态库SHARED