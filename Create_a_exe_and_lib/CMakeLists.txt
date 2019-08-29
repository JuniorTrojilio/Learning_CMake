#set a minimum version required
cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

#set name project and language
project("Create_a_exe_and_lib" LANGUAGES C)

add_library(arithmetic STATIC 
	MathFunctions.c
	MathFunctions.h
)

add_executable(${PROJECT_NAME} "Executable.c""Executable.h")

target_link_libraries(${PROJECT_NAME} arithmetic)