#ifndef GAME_H
#define GAME_H

#include "GameState.h" 
 
class Game
{
private:
	//Variables 
	sf::RenderWindow *window;
	sf::Event sfEvent;

	sf::Clock dtClock; 
	float dt;

	std::stack<State*> states;

	std::map<std::string, int> supportedKeys;
	
	//Initialization
	void initWindow();
	void initStates();
	void initKeys();
	
public:

	//Contructors/Deconstructors
	Game();
	virtual ~Game();

	//Functions

	//Regular
	void endApplication();

	//Updates
	void updateDt();
	void updateSFMLEvents();
	void update();

	//Render
	void render();

	//Core
	void run();
};
#endif