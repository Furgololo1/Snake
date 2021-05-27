#include <iostream>
#include <SFML/Graphics.hpp>
#include "Walls.h"
//#include <Keyboard.hpp>


int main()
{
    sf::RenderWindow* RW = new sf::RenderWindow(sf::VideoMode(1280, 720), "Snake", sf::Style::None);

    sf::Clock clock;

    sf::RectangleShape Rect(sf::Vector2f(25,25));
    sf::Color color(0,255,0);
    Rect.setFillColor(color);


    float x = 560.f;
    float y = 615.f;
    
    Walls* wall = new Walls;
    wall->SetupWalls(*RW);


    while (RW->isOpen()) {

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {

            if (clock.getElapsedTime().asMilliseconds() % 10 == 0) {
                if (x >= 1280.f) x = -100.f;
                RW->clear();
                x += 0.5;
                Rect.setPosition(x, y);
                RW->draw(Rect);
            }
        }

        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
            if (clock.getElapsedTime().asMilliseconds() % 10 == 0) {
                if (x <= -100.f) x = 1380.f;
                RW->clear();
                x -= 0.5;
                Rect.setPosition(x, y);
                RW->draw(Rect);
            }
        }

        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
            if (clock.getElapsedTime().asMilliseconds() % 10 == 0) {
                if (y >= 820.f) y = -100.f;
                RW->clear();
                y += 0.5;
                Rect.setPosition(x, y);
                RW->draw(Rect);
            }
        }

        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
            if (clock.getElapsedTime().asMilliseconds() % 10 == 0) {
                if (y <= -100.f) y = 820.f;
                RW->clear();
                y -= 0.5;
                Rect.setPosition(x, y);
                RW->draw(Rect);
            }
        }

        else {
            Rect.setPosition(x, y);
            RW->draw(Rect);
        }

        wall->DrawWalls();
        std::vector<sf::RectangleShape>* WallsArr;

        WallsArr = wall->GetWalls();
        //for (int i = 0; i < 4; i++)
           // RW->draw(*WallsArr[i]);
        
      
        //RW.draw(Ground);

        RW->display();

    }
    
    return 0;
}




