cmake_minimum_required(VERSION 3.15)
project(MyFirstProject)

file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
include_directories(${PROJECT_SOURCE_DIR}/include)
link_libraries(calc) # 只链接库 如果是自定义的系统会找不到
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib1) # 增加路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})
add_executable(app ${SRC})