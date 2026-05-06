#include "Game.h"
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;


int main() {

    // const int cellSize = 50;

    // Board board(10, 10);

    // sf::RenderWindow window(
    //     sf::VideoMode(board.getCols() * cellSize,
    //                   board.getRows() * cellSize),
    //     "Board UI"
    // );

    // sf::Font font;
    // if (!font.loadFromFile("arial.ttf")) return -1;

    // while (window.isOpen()) {
    //     sf::Event event;
    //     while (window.pollEvent(event)) {
    //         if (event.type == sf::Event::Closed)
    //             window.close();

    //         // 🖱️ Click interaction
    //         if (event.type == sf::Event::MouseButtonPressed) {
    //             int col = event.mouseButton.x / cellSize;
    //             int row = event.mouseButton.y / cellSize;

    //             if (row < board.getRows() && col < board.getCols()) {
    //                 board.getCell(row, col).setValue('X');
    //             }
    //         }
    //     }

    //     window.clear(sf::Color::Black);

    //     for (int r = 0; r < board.getRows(); r++) {
    //         for (int c = 0; c < board.getCols(); c++) {

    //             // Draw square
    //             sf::RectangleShape cell(sf::Vector2f(cellSize, cellSize));
    //             cell.setPosition(c * cellSize, r * cellSize);
    //             cell.setFillColor(sf::Color::White);
    //             cell.setOutlineColor(sf::Color::Black);
    //             cell.setOutlineThickness(1);
    //             window.draw(cell);

    //             // Draw char from Board
    //             char ch = board.getCell(r, c).getValue();

    //             sf::Text text;
    //             text.setFont(font);
    //             text.setString(std::string(1, ch));
    //             text.setCharacterSize(24);
    //             text.setFillColor(sf::Color::Black);

    //             text.setPosition(
    //                 c * cellSize + cellSize / 3,
    //                 r * cellSize + cellSize / 5
    //             );

    //             window.draw(text);
    //         }
    //     }

    //     window.display();
    // }

    return 0;
}