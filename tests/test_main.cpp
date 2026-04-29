#include <iostream>
#include <cassert>
#include "../src/Game.h"
using namespace std;

// TODO: Add tests for your const/side-effect-free functions first
// These are the easiest to test (see lecture notes)

void test_board_initialization() {
    // TODO: Create a Board and verify initial state
    // Board board(10, 10);
    // assert(board.getRows() == 10);
    // assert(board.getCols() == 10);
    // assert(board.isInside(11,11) == false);
   cout << "test_board_initialization: TODO" <<endl;
}

void test_is_solvable() {
    // TODO: Tests whether a given puzzle is solvable
   cout << "test_is_solvable: TODO" <<endl;
}

int main() {
   cout << "Running tests..." <<endl;

    test_board_initialization();
    test_is_solvable();

   cout << "\nAll tests completed." <<endl;
    return 0;
}
