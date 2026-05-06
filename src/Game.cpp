#include "Game.h"
#include <iostream>
using namespace std;

Game::Game(int r, int c) : board(r, c) {
    // creates a game with a specified board size and random rectangles and cells
}   
void Game::start() {
    // starts the game
}
void Game::processInput() {
    // processes the players input
}
bool Game::checkWin() {
    // checks if the game is over
    return true;
}