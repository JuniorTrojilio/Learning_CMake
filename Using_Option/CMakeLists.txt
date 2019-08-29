#set a minimum version required
cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

#set name project and language
project("Using_Option" LANGUAGES C)


#options to users
option(USE_LIBRARY "Compile sources into a library" OFF)

message(STATUS "Compile sources into a library? ${USE_LIBRARY}")

include(CMakeDependentOption)

#second option depends on the value of the first
cmake_dependent_option(
  MAKE_STATIC_LIBRARY "Compile sources into a static library" OFF
  "USE_LIBRARY" ON
  )

# third option depends on the value of the first
cmake_dependent_option(
  MAKE_SHARED_LIBRARY "Compile sources into a shared library" ON
  "USE_LIBRARY" ON
  )

 set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

# list sources
list(APPEND _sources MathFunctions.h MathFunctions.c)

if(USE_LIBRARY)

  message(STATUS "Compile sources into a STATIC library? ${MAKE_STATIC_LIBRARY}")
  message(STATUS "Compile sources into a SHARED library? ${MAKE_SHARED_LIBRARY}")

	if(MAKE_SHARED_LIBRARY)
		add_library(Mathematic ${_sources})
		add_executable(${PROJECT_NAME} "Executable_3.c""Executable_3.h")
		target_link_libraries(Conditional_Construct Mathematic)
	endif()

	if(MAKE_STATIC_LIBRARY)
		add_library(Mathematic ${_sources})
		add_executable(${PROJECT_NAME} "Executable_3.c""Executable_3.h")
		target_link_libraries(Conditional_Construct Mathematic)
	endif()
else()
	add_executable(${PROJECT_NAME} "Executable_3.c" ${_sources})
endif()