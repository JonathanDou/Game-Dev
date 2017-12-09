#include <SFML/Graphics.hpp>
#include <sstream>
#include <ctime>

sf::RenderWindow window(sf::VideoMode(700, 500), "Game");

// i made this draw function so our program is more organized
void draw() {
    window.clear();
    window.display();
}
// main function
int main() {
    //set our fps to 60
    window.setFramerateLimit(60);
    // sfml window polling
    while(window.isOpen()) {
        sf::Event event;
        while(window.pollEvent(event)) {
            if(event.type == sf::Event::Closed) {
                window.close();
            }

        }

        draw();

    }
}



