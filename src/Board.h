#pragma once
#include "Cell.h"
#include <vector>
using namespace std;

class Board {

private:
    int grid[GRID_SIZE][GRID_SIZE];

public:
   static constexpr int GRID_SIZE = 5;

   Board();

    int get(int x, int y) const;
    void set(int x, int y, int value);

   
};







