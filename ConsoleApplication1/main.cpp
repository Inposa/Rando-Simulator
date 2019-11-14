#include <SFML/Graphics.hpp>
#include "Player.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1000, 800), "Test !");
	sf::Image testSprite;
	testSprite.loadFromFile("./pics/sprite/default.png");
	
	sf::Image test2;
	test2.create(50, 50, sf::Color::Red);

	/*sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);*/
	


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		
		//window.draw(testSprite);
		window.display();
	}

	return 0;
}