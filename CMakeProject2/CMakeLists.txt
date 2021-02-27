cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(CMakeProject2 VERSION 1.0)


# add the MathFunctions library
add_subdirectory(dsc)

# add the executable
add_executable(CMakeProject2 CMakeProject2.cpp)

target_link_libraries(CMakeProject2 PUBLIC dsc_lib)

target_include_directories(CMakeProject2 PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/include"
                          )