#set a minimum version required
cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

#set name project and language
project("Conditional_Construct" LANGUAGES C)


#set a toggle for using a library
set(USE_LIBRARY OFF)


message(STATUS "Compile sources into a library? ${USE_LIBRARY}")

# BUILD_SHARED_LIBS is a global flag offered by CMake
# to toggle the behavior of add_library
set(BUILD_SHARED_LIBS OFF)

# list sources
list(APPEND _sources MathFunctions.h MathFunctions.c)

if(USE_LIBRARY)
  # add_library will create a static library
  # since BUILD_SHARED_LIBS is OFF
  add_library(calculus ${_sources})

 #add executable
add_executable(Conditional_Construct "Executable_2.c""Executable_2.h")

	target_link_libraries(Conditional_Construct calculus)
else()
	add_executable(Conditional_Construct "Executable_2.c" ${_sources})
endif()