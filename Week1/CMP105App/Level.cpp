#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;
	

	// initialise game objects
	rect.setSize(sf::Vector2f(50, 50));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	corner.setSize(sf::Vector2f(50, 50));
	corner.setFillColor(sf::Color::Yellow);

	circle.setRadius(50);
	circle.setPosition(550, 300);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(2.f);

	if (!font.loadFromFile("font/arial.ttf")) {
	
		std::cout << "can not find the font!!";
	}
		text.setFont(font);
		text.setFillColor(sf::Color::Cyan);
		text.setCharacterSize(24);
		text.setString("Hello, world!");
	
}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	pos = window->getSize();
	//corner.setPosition(pos, pos);
	corner.setPosition(pos.x - 50, pos.y - 50);
	//corner.setPosition(static_cast<sf::Vector2f>(pos));
	
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(rect);
	window->draw(circle);
	window->draw(text);
	window->draw(corner);
	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}