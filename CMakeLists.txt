# CMakeList.txt: arquivo de projeto de CMake de nível superior, fazer configuração global
# e inclua subprojetos aqui.
#
cmake_minimum_required (VERSION 3.8)

#set name project and language
project ("Learning_CMake" LANGUAGES C)

# Inclua subprojetos.
add_subdirectory ("Create_Executable")
add_subdirectory("Create_a_exe_and_lib")
add_subdirectory("Conditional_Construct")
add_subdirectory("Using_Option")