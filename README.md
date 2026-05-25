# Shikaku-Puzzle

## Features
-Creates a 5x5 grid
-Each cell within said grid is selectable and deselectable with left click
-Characters can be typed into cells and removed via backspace

## Building
cmake --build build --config Debug

this used to work. After my most recent addition to the project everything has fallen apart again.
It's running ctest before the test is created I think, and I fixed this before, but it somehow broke again.
I've spent many hours constantly trying to fix this, but it continues to break in new ways.

## Running
.\build\Debug\Shikaku-Puzzle.exe

## Running Tests
This program requires SFML
ctest --test-dir build --verbose

Same problem as before, the tests worked, but now they don't and I have spent too much time trying to figure out why.

## Author
Sean Ishida - CIS 25 Final Project