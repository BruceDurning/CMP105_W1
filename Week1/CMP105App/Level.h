#pragma once

#include <SFML/Graphics.hpp>
#include <string.h>
#include <iostream>


class Level{
public:
	Level(sf::RenderWindow* hwnd);
	~Level();

	void handleInput();
	void update();
	void render();

private:
	void beginDraw();
	void endDraw();
	sf::RenderWindow* window;
	sf::Vector2u pos;

	sf::RectangleShape rect, corner;
	sf::CircleShape circle;

	sf::Text text;
	sf::Font font;
};