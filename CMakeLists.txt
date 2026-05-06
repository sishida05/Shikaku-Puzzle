cmake_minimum_required(VERSION 3.20)
project(Shikaku)
 
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
 
# Enable testing
enable_testing()
 
# Tell the compiler where to find header files
include_directories(include)
 
# Main executable
add_executable(counter_app src/main.cpp)
 
# Test executable
add_executable(run_tests tests/test_counter.cpp)
 
# Register with CTest
add_test(NAME CounterTests COMMAND run_tests)

