# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(AdvancedTicTacToe)

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the source files
add_executable(AdvancedTicTacToe main.cpp)  # Adjust according to your source structure

# Google Test
add_subdirectory(googletest)
add_subdirectory(tests)  # Add this line to include the tests subdirectory
