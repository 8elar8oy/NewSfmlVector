#pragma once
#include "SFML/Graphics.hpp"

using namespace sf;
class Car {
private:
	sf:: Texture texture;
	sf::Sprite sprite;
	
public:

	Car(sf::Vector2f pos) {
		texture.loadFromFile("car.png");
		sprite.setTexture(texture);
		sprite.setPosition(pos);
	}
	sf::Sprite getSprite() { return sprite; }
};
