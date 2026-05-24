#include "Game.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <array>
#include <optional>
using namespace std;
using namespace sf;

constexpr int GRID_SIZE = 5;
constexpr int CELL_SIZE = 100;

int main() {
    RenderWindow window(VideoMode({500, 500}), "Easy Puzzle");

    // Store numbers in grid (-1 = empty)
    Board board;
    for (int x = 0; x < GRID_SIZE; x++) {
        for (int y = 0; y < GRID_SIZE; y++) {
            board.set(x, y, -1);
        }
    }

    optional<Vector2i> activeCell;

    // Font
    Font font("arial.ttf");

    while (window.isOpen()) {
        // ---------------- EVENTS ----------------
        while (auto event = window.pollEvent()) {
            if (event->is<Event::Closed>())
                window.close();

            // Mouse click → select cell
            if (event->is<Event::MouseButtonPressed>()) {
                auto mouse = Mouse::getPosition(window);

                int x = mouse.x / CELL_SIZE;
                int y = mouse.y / CELL_SIZE;

                if (x >= 0 && x < GRID_SIZE && y >= 0 && y < GRID_SIZE) {
                    board.toggleSelectedCell(x, y);
                    activeCell = Vector2i(x, y);
                }
            }

            // Key input → set number
            if (event->is<Event::TextEntered>() && activeCell) {
                char c = static_cast<char>(event->getIf<Event::TextEntered>()->unicode);

                if (c >= '0' && c <= '9') {
                    board.set(activeCell->x, activeCell->y, c - '0');
                }
            }

            // Backspace clears highlights
            if (event->is<Event::KeyPressed>()) {
                if (event->getIf<Event::KeyPressed>()->code == Keyboard::Key::Backspace) {
                    board.clearSelectedCells();
                }
            }
        }

        // ---------------- DRAW ----------------
        window.clear(Color::White);

        for (int y = 0; y < GRID_SIZE; y++) {
            for (int x = 0; x < GRID_SIZE; x++)
            {
                RectangleShape cell(Vector2f(CELL_SIZE - 2, CELL_SIZE - 2));
                cell.setPosition(Vector2f(x * CELL_SIZE + 1, y * CELL_SIZE + 1));

                if (board.isSelected(x, y))
                    cell.setFillColor(Color(200, 200, 255));
                else
                    cell.setFillColor(Color::White);

                cell.setOutlineThickness(1);
                cell.setOutlineColor(Color::Black);

                window.draw(cell);

                // Draw number if exists
                int value = board.get(x, y);
                if (value != -1) {
                    Text text(font);
                    text.setString(to_string(board.get(x, y)));
                    text.setCharacterSize(40);
                    text.setFillColor(Color::Black);

                    text.setPosition(Vector2f(
                        x * CELL_SIZE + 35,
                        y * CELL_SIZE + 25
                    ));

                    window.draw(text);
                }
            }
        }

        window.display();
    }

    return 0;
}