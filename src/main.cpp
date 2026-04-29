#include "Game.h"
#include <iostream>
using namespace std;


void main() {

    // creates a game with a 10 x 10 board
    Game game(10,10);

    // starts the game
    game.start();

    return 0;
}