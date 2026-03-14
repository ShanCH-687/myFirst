#1.声明要使用的CMake版本（要求的最低版本）
cmake_minimum_required(VERSION 3.10)

#2.定义项目名称和版本
project(myfirst VERSION 1.0)

#3.指定编译选项（此处开启了所有警告并使用c11标准）
set (CMAKE_C_STANDARD 11)
add_compile_options(-Wall -Wextra -g)

#4.添加可执行文件,并指定源文件
add_executable(main main.c math_utils.c)

#5.指定头文件搜索路径
target_include_directories(main PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})     
#CMake 提供的内置变量，不需要手动输入实际的目录路径，CMake 会在执行时自动替换成对应的真实路径