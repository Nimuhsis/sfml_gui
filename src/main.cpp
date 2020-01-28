#include <SFML/Graphics.hpp>

#include "widget/button.hpp"

#define WIDTH 640
#define HEIGHT 480

int main()
{
	sf::RenderWindow window( sf::VideoMode( 640, 480 ), "Snake" );
	
	Button bt( "Start", 200.f, 35.f );
	bt.setPosition( sf::Vector2f( 220.f, 223.f ) );
	//bt.setButtonColor( sf::Color( 0xff, 0xff, 0xff, 0xff ) );

	while ( window.isOpen() ) {
		sf::Event event;
		while ( window.pollEvent( event ) ) {
			switch ( event.type ) {
				case sf::Event::Closed:
					window.close();
					break;
                case sf::Event::KeyPressed:
					break;
				default: break;
			}
		}
		window.clear();
	
		bt.show( window );
		
		window.display();
	}

	return 0;
}
