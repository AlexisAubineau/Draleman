#ifndef MAINMENUSTATE_H
#define MAINMENUSTATE_H

#include "GameState.h"
#include "Button.h"

class MainMenuState :
	public State
{
private:
	//variables
	sf::Texture backgroundTexture;
	sf::RectangleShape background;
	sf::Font font;

	std::map<std::string, Button*> buttons;

	//Functions
	void initVariables();
	void initBackground();
	void initFonts();
	void initKeybinds();
	void initButtons();

	sf::String backgroundPath = "Resources/Images/Backgrounds/bg1.png";
	sf::String fontPath = "Fonts/Dosis-Light.ttf";

public:
	MainMenuState(sf::RenderWindow* window, std::map<std::string, int>* supportedKeys, std::stack<State*>* states);
	virtual ~MainMenuState();

	//Functions
	void updateInput(const float& dt);
	void updateButtons();
	void update(const float& dt);
	void renderButtons(sf::RenderTarget* target = NULL);
	void render(sf::RenderTarget* target = NULL);
};

#endif
