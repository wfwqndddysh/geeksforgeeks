#==============================================================================
#cmake 版本
#==============================================================================
cmake_minimum_required(VERSION 2.8)

#==============================================================================
#项目logic name
#==============================================================================
project(geeksforgeeks)

#==============================================================================
#设置一些通用变量值，指定所有目录放于一个目录
#==============================================================================
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY         "${CMAKE_BINARY_DIR}/")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY         "${CMAKE_BINARY_DIR}/")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY         "${CMAKE_BINARY_DIR}/")

#==============================================================================
#处理构建类型
#==============================================================================
if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE Debug)
endif()

#==============================================================================
#编译选项
#==============================================================================
set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)
set(WARNING_FLAGS           "-Weverything -Wno-c++98-compat")
set(COMPILE_FLAGS           "-std=c++11")
set(DEBUG_FLAGS             "-DDEBUG -g3 -O0")
set(RELEASE_FLAGS           "-DNDEBUG -O3")
set(CMAKE_CXX_FLAGS_DEBUG   "${WARNING_FLAGS} ${COMPILE_FLAGS} ${DEBUG_FLAGS}")
set(CMAKE_CXX_FLAGS_RELEASE "${WARNING_FLAGS} ${COMPILE_FLAGS} ${RELEASE_FLAGS}")

#==============================================================================
# really start ...
#==============================================================================
add_executable(factorial_of_larger_number factorial_of_larger_number.cpp)
add_executable(linear_equation_solution linear_equation_solution.cpp)

