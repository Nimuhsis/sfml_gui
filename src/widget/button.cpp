# include "button.hpp"

# include <iostream>
# include <cmath>

Button::Button( std::string text, float width, float height )
	:m_body( sf::Vector2f( width, height ) )
{
	m_body.setPosition( sf::Vector2f( 1.f, 1.f ) );
	m_body.setFillColor( sf::Color::White );

	if ( !m_font.loadFromFile( "res/fonts/Roboto/Roboto-Regular.ttf" ) ) {
		std::cerr << "Could not load the m_font\n"; 
	}

	m_text.setFont( m_font );
	m_text.setString( text );
	m_text.setCharacterSize( 23 );
	m_text.setFillColor( sf::Color::Black );
	updateText();
}

Button::~Button()
{
	
}

void Button::setPosition( sf::Vector2f position )
{
	m_body.setPosition( position );
	m_text.setPosition( position );
	
	updateText();
}

void Button::updateText()
{
	m_text.setOrigin( m_text.getGlobalBounds().width / 2,
			m_text.getGlobalBounds().height / 2 );

	m_text.move(m_body.getGlobalBounds().width / 2.0f,
			m_body.getGlobalBounds().height / 2.5f );
}

void Button::setButtonColor( sf::Color color )
{
	m_body.setFillColor( color );
}

void Button::setTextColor( sf::Color color )
{
	m_text.setFillColor( color );
}

void Button::show( sf::RenderTarget &window )
{
	window.draw( m_body );
	window.draw( m_text );
}
