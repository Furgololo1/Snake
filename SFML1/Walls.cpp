#include "Walls.h"

using namespace sf;

Walls::Walls() {}

void Walls::SetupWalls(RenderWindow& RW)
{
	_RenderWindow = &RW;
	Vector2u WindowSize = _RenderWindow->getSize();

	float x = (float)WindowSize.x;
	float y = (float)WindowSize.y;

	//delete WindowSize;

	RectangleShape* Rect = new RectangleShape;

	for (int i = 0; i < 4; i++)
		Wall->push_back(*Rect);
	
	Color WallsColor(0, 0, 255);

	for (int i = 0; i < 4; i++) {
		(*Wall)[i].setFillColor(WallsColor);

		if (i == 0 || i == 1) {
			(*Wall)[i].setSize(Vector2f(5.f, y));
		}
		else if (i == 2 || i == 3) {
			(*Wall)[i].setSize(Vector2f(x, 5.f));
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
}
