#pragma once
#include "Cell.h"
#include <vector>

class Board {

public:
    static constexpr int GRID_SIZE = 5;

private:
    int grid[GRID_SIZE][GRID_SIZE];

public:
   Board();

    int get(int x, int y) const;
    void set(int x, int y, int value);

   
};







