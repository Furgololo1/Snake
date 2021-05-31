#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

using namespace sf;

class Walls
{
	RenderWindow* _RenderWindow = nullptr;

	std::vector<RectangleShape>* Wall = new std::vector<RectangleShape>();

public:

	Walls();

	void SetupWalls(RenderWindow& RW);

	void DrawWalls();
	std::vector<RectangleShape> GetWalls() { return *Wall; };
	
};

