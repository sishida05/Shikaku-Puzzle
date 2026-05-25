#include <iostream>
#include <cassert>
#include "../src/Board.h"
using namespace std;

// TODO: Add tests for your const/side-effect-free functions first
// These are the easiest to test (see lecture notes)

void testBoardInput() {
     // Board selection test
    Board board;
    assert(board.get(0, 0) == -1); // Initially empty
    board.set(0, 0, 5);
    assert(board.get(0, 0) == 5); // Value should be updated
}
void testBoardSelection() {
    Board board;
    assert(!board.isSelected(1, 1)); // Initially not selected
    board.toggleSelectedCell(1, 1);
    assert(board.isSelected(1, 1)); // Should be selected
    board.toggleSelectedCell(1, 1);
    assert(!board.isSelected(1, 1)); // Should be deselected
}

void testBoardClearSelection() {
    Board board;
    board.toggleSelectedCell(2, 2);
    board.toggleSelectedCell(3, 3);
    assert(board.isSelected(2, 2));
    assert(board.isSelected(3, 3));
    board.clearSelectedCells();
    assert(!board.isSelected(2, 2));
    assert(!board.isSelected(3, 3));
}

int main() {
    
    testBoardInput();
    testBoardSelection();
    testBoardClearSelection();

    cout << "All tests passed!" << endl;
    return 0;
}
