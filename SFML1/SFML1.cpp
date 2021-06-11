#include <iostream>
#include <SFML/Graphics.hpp>
#include "Walls.h"
//#include "Collision.h"

using namespace sf;

int main()
{
    RenderWindow* RW = new RenderWindow(VideoMode(1280, 720), "Snake", Style::None);

    Clock clock;

    float x = 560.f;
    float y = 615.f;

    /////////////////////////////////
    RectangleShape rect(Vector2f(25,25)); 
    Color color(0, 255, 0);
    rect.setFillColor(color);

    Walls* wall = new Walls;
    wall->SetupWalls(*RW);

    //Collision* collision = new Collision(&rect, wall->GetWalls());
    //collision->StartCollision();

    ////////////////////////////////
 

    while (RW->isOpen()) {

        if (Keyboard::isKeyPressed(Keyboard::D)) {

            if (clock.getElapsedTime().asMilliseconds() % 10 == 0) {
                if (x >= 1280.f) x = -100.f;
                RW->clear();
                x += 1.f;
                rect.setPosition(x, y);
                RW->draw(rect);
            }
        }

        else if (Keyboard::isKeyPressed(Keyboard::A)) {
            if (clock.getElapsedTime().asMilliseconds() % 10 == 0) {
                if (x <= -100.f) x = 1380.f;
                RW->clear();
                x -= 1.f;
                rect.setPosition(x, y);
                RW->draw(rect);
            }
        }

        else if (Keyboard::isKeyPressed(Keyboard::S)) {
            if (clock.getElapsedTime().asMilliseconds() % 10 == 0) {
                if (y >= 820.f) y = -100.f;
                RW->clear();
                y += 1.f;
                rect.setPosition(x, y);
                RW->draw(rect);
            }
        }

        else if (Keyboard::isKeyPressed(Keyboard::W)) {
            if (clock.getElapsedTime().asMilliseconds() % 10 == 0) {
                if (y <= -100.f) y = 820.f;
                RW->clear();
                y -= 1.f;
                rect.setPosition(x, y);
                RW->draw(rect);
            }
        }

        else {
            rect.setPosition(x, y);
            RW->draw(rect);
        }

        wall->DrawWalls();

        RW->display();

    }
    
    return 0;
}




