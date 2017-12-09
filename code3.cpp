#include <SFML/Graphics.hpp>
#include <sstream>
#include <ctime>

sf::RenderWindow window(sf::VideoMode(700, 500), "Game");
sf::Texture herotextureleft;
sf::Texture herotextureright;
sf::Sprite hero;

//this loads the images for our sprites
void load() {
    herotextureright.loadFromFile("MainSpriteRight.png", sf::IntRect(0, 0, 140, 151));
    herotextureleft.loadFromFile("MainSpriteLeft.png", sf::IntRect(0, 0, 140, 151));
    hero.setTexture(herotextureright);
    hero.setPosition(100,100);
}

//check for player input (arrow keys)
void input() {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {

    } else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        hero.setTexture(herotextureright);
    } else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {

    } else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        hero.setTexture(herotextureleft);
    }
}

//i made this draw function so our program is more organized
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

    //timers are useful for animation
    sf::Clock timer1;

    // sfml window polling
    while(window.isOpen()) {
        sf::Event event;
        while(window.pollEvent(event)) {
            if(event.type == sf::Event::Closed) {
                window.close();
            }

        }

        //get the input
        input();

        //draw the window
        draw();

    }
}
