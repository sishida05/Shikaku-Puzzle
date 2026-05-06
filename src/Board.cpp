#include "Board.h"
#include <iostream>
using namespace std;

    
Board::Board(int r, int c) {
    // board constructor
    this->rows = r;
    this->cols = c;
    
}
void Board::display() const {
    // display the board to the player
}
bool Board::isInside(int r, int c) const {
    // checks if a (r,c) is inside the board
    return true;
}
Cell& Board::getCell(int r, int c) {
    // gets a given cell
    return grid[r][c];
}
int Board::getRows() const {
    // gets rows
    // return this->rows;
    return 0;
}
int Board::getCols() const {
    // gets columns
    // return this->cols;
    return 0;
}