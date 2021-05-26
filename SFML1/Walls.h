#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

class Walls
{
	sf::RenderWindow* _RenderWindow = nullptr;

	std::vector<sf::RectangleShape*> Wall;

public:

	Walls() {};

	void SetupWalls(sf::RenderWindow& RW);
	
};

