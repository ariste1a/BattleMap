#include <SFML/Graphics.hpp>
#include "HexMap.h"

static const int MAP_SIZE = 10; 
static const Point ORIGIN = Point(0, 0);
int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);


	Layout pointy = Layout(layout_pointy, Point(MAP_SIZE, MAP_SIZE), ORIGIN);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}	
	return 0;
}
