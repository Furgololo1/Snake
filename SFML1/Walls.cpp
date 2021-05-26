#include "Walls.h"

void Walls::SetupWalls(sf::RenderWindow& RW)
{
	_RenderWindow = &RW;
	sf::Vector2u WindowSize = _RenderWindow->getSize();

	float x = WindowSize.x;
	float y = WindowSize.y;

	//delete WindowSize;

	sf::RectangleShape* Rect = new sf::RectangleShape;

	for (int i = 0; i < 4; i++)
		Wall.push_back(Rect);
	
	sf::Color WallsColor(0, 0, 255);

	for (int i = 0; i < 4; i++) {
		Wall[i]->setFillColor(WallsColor);
		if (i == 0 || i == 1) {
			Wall[i]->setSize(sf::Vector2f(5.f, y));
			if (i == 0)
				Wall[i]->setPosition(5.f, 0.f);

		}
	}
	
	for (int i = 0; i < 4; i++)
		_RenderWindow->draw(*Wall[i]);

}
