#pragma once
#include "Board.h"
#include "PuzzleGen.h"
#include "Solver.h"

class Game {

private:
    // contains a board
    Board board;

    // contains puzzle generator
    PuzzleGen generator;

    // for checking if the game is running
    bool running;

public:
    // creates a game with a specified board size and random rectangles and cells
    Game(int rows, int cols);

    // starts the game
    void start();

    // processes the players input
    void processInput();

    // checks if the game is over
    bool checkWin();

};





