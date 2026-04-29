#pragma once
#include "Cell.h"
#include <vector>
using namespace std;

class Board {

private:
    // rows of the board
    int rows;
    
    // columns of the board
    int cols;
    
    // Grid of cells
    vector<vector<Cell>> grid;

public:
    // board constructor
    Board(int r, int c);
    
    // display the board to the player
    void display() const;
    
    // checks if a (r,c) is inside the board
    bool isInside(int r, int c) const;
    
    // gets a given cell
    Cell& getCell(int r, int c);
    
    // gets rows
    int getRows() const;
    
    // gets columns
    int getCols() const;

};







