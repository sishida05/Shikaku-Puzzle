#pragma once
#include "Board.h"

class PuzzleGen {

public:
    // randomly divide the board into rectangles, and put one number in a random cell per rectangle
    void generate(Board& board);

};