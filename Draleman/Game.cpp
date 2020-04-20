#include "Game.h"

//Static functions

//Initializer functions

void Game::initWindow()
{
	/*Create a SFML Window using option from a window.ini file.*/
	this->window = new sf::RenderWindow (sf::VideoMode(800, 600), "Draleman");
}

//Contructors/Deconstructors
Game::Game()
{
    this->initWindow();
	
}

Game::~Game()
{
	delete this->window;
}

void Game::updateDt()
{
	/*Updates the dt variable with the time it takes to update and render one frame. */
	
    this->dt = this->dtClock.restart().asSeconds() ;
}

//Functions

void Game::updateSFMLEvents()
{
    while (this->window->pollEvent(this->sfEvent))
    {
        if (this->sfEvent.type == sf::Event::Closed)
            this->window->close();
    }
}

void Game::update()
{
    this->updateSFMLEvents();
}

void Game::render()
{
    this->window->clear();

	//Render items
	
    this->window->display();
}

void Game::run()
{
    while (this->window->isOpen())
    {
        this->updateDt(); 
		this->update();
		this->render();
    }
}
