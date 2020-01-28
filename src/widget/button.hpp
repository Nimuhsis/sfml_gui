#ifndef BUTTON_HPP
#define BUTTON_HPP

# include <SFML/Graphics/Font.hpp>
# include <SFML/Graphics/RectangleShape.hpp>
# include <SFML/Graphics/RenderTarget.hpp>
# include <SFML/Graphics/Text.hpp>

/*! \class Button
 *  \brief Button widget
 *
 *  Creates a Button and display on the screen
 *  handling events etc...
 */
class Button
{
public:
	Button( std::string text, float width, float height );
	virtual ~Button();

	void setPosition( sf::Vector2f position );

	void show( sf::RenderTarget &window );

	void setButtonColor( sf::Color color );

	void setTextColor( sf::Color color );

	void updateText();

protected:
	sf::RectangleShape m_body; /*!< Body of the button */
	sf::Font m_font;
	sf::Text m_text;
};

#endif // BUTTON_HPP
