#pragma once
#include "Cell.h"
#include <vector>
#include <set>
#include <utility>

class Board {

public:
    static constexpr int GRID_SIZE = 5;

private:
    int grid[GRID_SIZE][GRID_SIZE];
    std::set<std::pair<int, int>> selectedCells;

public:
   Board();

    int get(int x, int y) const;
    void set(int x, int y, int value);

    void toggleSelectedCell(int x, int y);
    void clearSelectedCells();
    bool isSelected(int x, int y) const;
};







