cmake_minimum_required(VERSION 3.15)
project(MyFirstProject)

file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
include_directories(${PROJECT_SOURCE_DIR}/include)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib2)
add_executable(app ${SRC})
set(a abc)
list(APPEND a bc cd) # 字符串的拼接 会直接并在一起 有隐形的分号隔开
list(REMOVE_ITEM a cd bc) # 字符串的删除
# 如果要从文件列表中删除一个文件 这个文件要写成完整的绝对路径形式 才能在字符串中被找到
message(${a})
target_link_libraries(app calc) # 放在最后 将后者链接到前者
# 动态库只有当可执行程序调用动态库中的函数的时候才会被加载

# list(LENGTH A B) A变量的长度被存储到B中 都是字符串格式
# list(GET A a1 a2 a3 ... B) A变量中下标索引是a1,a2,a3,...的内容存储在B中
# list(JOIN A glue B) A的各元素间隔用glue连接并存储到B中
# list(FIND A value B) A中寻找value 找到了B存储下标 没找到B存储-1
# list(INSERT A index a1 a2 a3 ...) 在A的index位置插入a1,a2,a3,...
# list(PREPEND A a1 a2 a3 ...) 相当于index=0的INSERT
# list(POP_BACK A B) A弹出最后一个元素 如果有B的话就存储被弹出的元素
# list(POP_FRONT A B) 第一个元素 其他同上
# list(REMOVE_ITEM A value1 value2 ...)
# list(REMOVE_AT A index1 index2 ...)
# list(REMOVE_DUPLICATES A) 删除重复元素
# list(REVERSE A) 反转
# list(SORT A COMPARE compare CASE case ORDER order)
# compare: STRING FILE_BASENAME NATURAL 默认字典序
# case: SENSITIVE INSENSITIVE 大小写敏感 默认敏感
# order: ASCENDING DESCENDING 升序降序 默认升序

# add_definitions(-D宏名称)
# 相当于gcc test.c -DDEBUG -o app
# 在代码中可以加入以下片段
# #ifdef 宏名称
# 输出语句
# #endif