#pragma once
#include "PuzzleGen.h"

class Solver {

public:
    // checks whether the puzzle has a single solution with no overlapping rectangles
    bool isSolvable(Board& board);

};