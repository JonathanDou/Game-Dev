#include <SFML/Graphics.hpp>
#include <sstream>
#include <ctime>

sf::RenderWindow window(sf::VideoMode(700, 500), "Game");
sf::Texture herotextureleft;
sf::Texture herotextureright;
sf::Sprite hero;
int x = 100;
int y = 100;
int herospeed = 5;

//this loads the images for our sprites
void load() {
    herotextureright.loadFromFile("MainSpriteRight.png", sf::IntRect(0, 0, 140, 151));
    herotextureleft.loadFromFile("MainSpriteLeft.png", sf::IntRect(0, 0, 140, 151));
    hero.setTexture(herotextureright);
    hero.setPosition(x,y);
}

//check for player input (arrow keys)
void input() {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        y = y - herospeed;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        x = x + herospeed;
        hero.setTexture(herotextureright);

    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        y = y + herospeed;

    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        x = x - herospeed;
        hero.setTexture(herotextureleft);
    }
    hero.setPosition(x,y);
}

//i made this draw function so our program is more organized
void draw() {
    window.clear();
    window.draw(hero);
    window.display();
}
