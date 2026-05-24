#include "Board.h"
#include <iostream>
using namespace std;

    
Board::Board() {
    // Initialize the grid with -1 (indicating empty cells)
    for (int x = 0; x < GRID_SIZE; x++) {
        for (int y = 0; y < GRID_SIZE; y++) {
            grid[x][y] = -1;
        }
    }
}
int Board::get(int x, int y) const {
    if (x >= 0 && x < GRID_SIZE && y >= 0 && y < GRID_SIZE) {
        return grid[x][y];
    }
    return -1; // Return -1 for out-of-bounds access
}
void Board::set(int x, int y, int value) {
    if (x >= 0 && x < GRID_SIZE && y >= 0 && y < GRID_SIZE) {
        grid[x][y] = value;
    }
}