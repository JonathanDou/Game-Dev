#include <SFML/Graphics.hpp>
#include <sstream>
#include <ctime>

sf::RenderWindow window(sf::VideoMode(700, 500), "Game");
sf::Texture herotexture;
sf::Sprite hero;

//this loads the images for our sprites
void load() {
    herotexture.loadFromFile("MainSpriteRight.png", sf::IntRect(0, 0, 140, 151));
    hero.setTexture(herotexture);
    hero.setPosition(300,200);
}

// i made this draw function so our program is more organized
void draw() {
    window.clear();
    window.draw(hero);
    window.display();
}

// main function
int main() {
    //set our fps to 60
    window.setFramerateLimit(60);

    //load the images
    load();

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
