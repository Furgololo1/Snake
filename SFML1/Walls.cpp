#include "Walls.h"



Walls::Walls() {}

void Walls::SetupWalls(sf::RenderWindow& RW)
{
	_RenderWindow = &RW;
	sf::Vector2u WindowSize = _RenderWindow->getSize();

	float x = WindowSize.x;
	float y = WindowSize.y;

	//delete WindowSize;

	sf::RectangleShape* Rect = new sf::RectangleShape;

	for (int i = 0; i < 4; i++)
		Wall->push_back(*Rect);
	
	sf::Color WallsColor(0, 0, 255);

	for (int i = 0; i < 4; i++) {
		(*Wall)[i].setFillColor(WallsColor);

		if (i == 0 || i == 1) {
			(*Wall)[i].setSize(sf::Vector2f(5.f, y));
		}
		else if (i == 2 || i == 3) {
			(*Wall)[i].setSize(sf::Vector2f(x, 5.f));
		}
	}
	
	
		(*Wall)[0].setPosition(0.f,0.f);
		(*Wall)[1].setPosition(x-5.f, 0.f);
		(*Wall)[2].setPosition(0.f, 0.f);
		(*Wall)[3].setPosition(0.f, y-5.f);


}

void Walls::DrawWalls()
{
	for (int i = 0; i < 4; i++)
		_RenderWindow->draw((*Wall)[i]);

	//_RenderWindow->draw(*Wall[2]);
	//_RenderWindow->draw(*(Wall)[1]);
	//_RenderWindow->draw(*Wall[2]);
	//_RenderWindow->draw(*Wall[3]);
}
