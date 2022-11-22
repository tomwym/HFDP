cmake_minimum_required(VERSION 3.12)

project(
    Head_First_Design_Patterns
    VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

add_subdirectory(01_Strategy)
add_subdirectory(02_Observer)
add_subdirectory(03_Decorator)
add_subdirectory(04_Factory)
