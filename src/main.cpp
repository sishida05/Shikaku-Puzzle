#include "Game.h"
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;


int main() {

    // Create a 200x200 window titled "SFML works!"
    sf::RenderWindow window(sf::VideoMode({200, 200}), "SFML works!");

    // Create a green circle shape with a radius of 100
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    // Main application loop
    while (window.isOpen()) {

        // Clear the window with a default color (black)
        window.clear();

        // Draw the circle shape
        window.draw(shape);

        // Display the contents of the window
        window.display();
    }


    return 0;
}