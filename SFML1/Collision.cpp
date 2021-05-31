#pragma once

#include "Collision.h"


void Collision::StartCollision()
{
	thread->launch();
}

/*void Col(RectangleShape rect, std::vector<RectangleShape> Wall)
{
	Clock clock2;

	static int a = 0;

	std::vector<Rect<RectangleShape>>* WallArr(Rect<RectangleShape> Wall);
	//WallArr->push_back(Wall[0]);

	while (true) {


		Vector2f v2f = rect.getPosition();
		int x1 = v2f.x;
		int y1 = v2f.y;
		FloatRect fr1(v2f.x, v2f.y, 25, 25);
		

		//if (WallArr)
		//	std::cout << "array is not empty " << std::endl;
	//}
}*/


void Collision::ThreadFunc()
{
	Clock clock2;
	
	std::cout << "Thread works" << std::endl;

	while (true)
	{
		if(clock2.getElapsedTime().asMilliseconds() % 50 == 0){
			Vector2f a = Wall[0].getPosition();
			FloatRect fRect(RectPos.x, RectPos.y, 25, 25);
			FloatRect wallrect(a.x, a.y, 5.f, 600.f);
			if (fRect.intersects(fRect, wallrect)) {
				std::cout << "Collision" << std::endl;
			}

		//	std::cout << "Thread works" << std::endl;
		}

	}
		

}
