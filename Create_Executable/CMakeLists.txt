#add to minimum version required to cmake
cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

#add to name project and declare variables
project("Create_Executable")

#add executable
add_executable(${PROJECT_NAME} "Create_First_Executable.c")