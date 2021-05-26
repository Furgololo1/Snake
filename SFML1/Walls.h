#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

class Walls
{

	sf::RenderWindow* RenderWindow;

	std::vector<sf::RectangleShape>* Wall;

public:

	Walls();

	void SetupWalls(sf::RenderWindow& RW);
	
};
