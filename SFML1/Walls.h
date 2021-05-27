#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

class Walls
{
	sf::RenderWindow* _RenderWindow = nullptr;

	std::vector<sf::RectangleShape>* Wall = new std::vector<sf::RectangleShape>();

public:

	Walls();

	void SetupWalls(sf::RenderWindow& RW);

	void DrawWalls();
	std::vector<sf::RectangleShape>* GetWalls() { return Wall; };
	
};

