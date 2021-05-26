#include <iostream>
#include <SFML/Graphics.hpp>
#include "Walls.h"
//#include <Keyboard.hpp>

int main()
{
    sf::RenderWindow RW(sf::VideoMode(1280, 720), "Snake");

    sf::Clock clock;

    sf::RectangleShape Rect(sf::Vector2f(25,25));
    sf::Color color(0,255,0);
    Rect.setFillColor(color);

    float x = 560.f;
    float y = 615.f;

    sf::RectangleShape Ground(sf::Vector2f(1280, 5));
    sf::Color Grcolor(0, 0, 255);
    Ground.setFillColor(Grcolor);
    Ground.setPosition(0.f, 715.f);


    while (RW.isOpen()) {

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {

            if (clock.getElapsedTime().asMilliseconds() % 10 == 0) {
                if (x >= 1280.f) x = -100.f;
                RW.clear();
                x += 0.5;
                Rect.setPosition(x, y);
                RW.draw(Rect);
            }
        }

        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
            if (clock.getElapsedTime().asMilliseconds() % 10 == 0) {
                if (x <= -100.f) x = 1380.f;
                RW.clear();
                x -= 0.5;
                Rect.setPosition(x, y);
                RW.draw(Rect);
            }
        }

        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
            if (clock.getElapsedTime().asMilliseconds() % 10 == 0) {
                if (y >= 820.f) y = -100.f;
                RW.clear();
                y += 0.5;
                Rect.setPosition(x, y);
                RW.draw(Rect);
            }
        }

        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
            if (clock.getElapsedTime().asMilliseconds() % 10 == 0) {
                if (y <= -100.f) y = 820.f;
                RW.clear();
                y -= 0.5;
                Rect.setPosition(x, y);
                RW.draw(Rect);
            }
        }

        else {
            Rect.setPosition(x, y);
            RW.draw(Rect);
        }

     
        RW.draw(Ground);

        RW.display();

    }
    
    return 0;
}




