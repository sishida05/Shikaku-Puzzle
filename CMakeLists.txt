cmake_minimum_required(VERSION 3.20)
project(Shikaku)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(SFML_DIR "C:/SFML/SFML-3.1.0/lib/cmake/SFML")

# Enable testing
#enable_testing()

# Find SFML
find_package(SFML 3.1.0 COMPONENTS Graphics Window System REQUIRED)

# Include header files
include_directories(src)

# Main executable
add_executable(counter_app
    src/main.cpp
    src/Board.cpp
    src/Cell.cpp
    src/Game.cpp
    src/Input.cpp
    src/PuzzleGen.cpp
    src/Rectangle.cpp
    src/Solver.cpp
)

# Link SFML to main executable
target_link_libraries(counter_app PRIVATE
    SFML::Graphics
    SFML::Window
    SFML::System
)

# Test executable
#add_executable(run_tests
#    tests/test_main.cpp
#    src/Board.cpp
#    src/Cell.cpp
#    src/Game.cpp
#    src/Input.cpp
#    src/PuzzleGen.cpp
#    src/Rectangle.cpp
#    src/Solver.cpp
#)

# Link SFML to tests too (only if tests use SFML)
#target_link_libraries(run_tests
#   SFML::Graphics
#   SFML::Window
#   SFML::System
#)

# Register tests
#add_test(NAME CounterTests COMMAND run_tests)

# Include your headers
target_include_directories(counter_app PRIVATE src)

