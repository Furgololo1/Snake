#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <vector>

using namespace sf;

class Collision
{

	RectangleShape* rect = nullptr;
	Vector2f RectPos;
	std::vector<RectangleShape> Wall;
	Thread* thread;

public:

	Collision(RectangleShape* rect, std::vector<RectangleShape> wall) : rect(rect), Wall(wall) {
		thread = new Thread(&Collision::ThreadFunc, this);
		RectPos = rect->getPosition();
	}

	void UpdateRectPos(Vector2f pos) { RectPos = pos; }

	void StartCollision();

	void CheckCollision();

	void ThreadFunc();




};