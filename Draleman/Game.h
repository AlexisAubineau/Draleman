#ifndef GAME_H
#define GAME_H

#include "State.h"
 
class Game
{
private:
	//Variables 
	sf::RenderWindow *window;
	sf::Event sfEvent;

	sf::Clock dtClock; 
	float dt;
	
	//Initialization
	void initWindow();
	
public:

	//Contructors/Deconstructors
	Game();
	virtual ~Game();

	//Functions
	void updateDt();
	void updateSFMLEvents();
	void update();
	void render();
	void run();
};
#endif