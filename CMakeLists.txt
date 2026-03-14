#1.声明要使用的CMake版本（要求的最低版本）
cmake_minimum_required(VERSION 3.10)

#2.定义项目名称和版本
project(myfirst VERSION 1.0)

#3.指定编译选项（此处开启了所有警告并使用c11标准）
set (CMAKE_C_STANDARD 11)
add_compile_options(-Wall -Wextra -g)

#4.添加可执行文件,并指定源文件
add_executable(main main.c math_utils.c)