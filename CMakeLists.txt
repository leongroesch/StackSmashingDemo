cmake_minimum_required(VERSION 3.22)

set(project_name "StackSmashingDemo")

project(${project_name})

add_compile_options(-fno-stack-protector -m32 -O0 -Wall -Wextra -Wpedantic)

add_link_options(-m32)

add_executable( ${project_name} src/main.c )