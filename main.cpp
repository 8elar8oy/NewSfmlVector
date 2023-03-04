#include <SFML/Graphics.hpp>
#include <vector>
#include <ctime>
#include "car.h"
using namespace sf;
using namespace std;

int main()
{
	
	RenderWindow window(VideoMode(800, 600), "SFML Works!");

	vector<Car*> v1;
	for (int i = 0; i < 5; i++)
	{
		Car* c1= new Car(Vector2f{150.f*i,50.f});
		v1.push_back(c1);
	}
	

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		// Отрисовка окна 
		window.clear();
		window.display();
	}
	for (int i = 0; i < 5; i++)
	{
		
		window.draw(v1.at(i)->getSprite());
	}
	return 0;
}