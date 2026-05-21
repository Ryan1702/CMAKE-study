cmake_minimum_required(VERSION 3.15)
project(MyFirstProject)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}) # 用于回到根目录 即上一次执行project操作的地方
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp) # 当下位置 会跟随进入子文件夹而变
include_directories(${PROJECT_SOURCE_DIR}/include) # 指定头文件路径
add_executable(run ${SRC})

# 在做下述操作前需要把main.cpp去掉或者移到src外面
# file(GLOB SRC_FUN ${CMAKE_CURRENT_SOURCE_DIR}/src)
# set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
# add_library(calc STATIC ${SRC_FUN})