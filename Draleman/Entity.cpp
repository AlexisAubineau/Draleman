#include "Entity.h"

Entity::Entity()
{
	this->shape.setSize(sf::Vector2f(50.f, 50.f));
	this->shape.setFillColor(sf::Color::White);
	this->mouvementSpeed = 100.f;
}

Entity::~Entity()
{

}

void Entity::move(const float& dt, const float dir_x, const float dir_y)
{
	this->shape.move(dir_x * this->mouvementSpeed * dt, dir_y * this->mouvementSpeed * dt);
}

void Entity::update(const float& dt)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
		this->move(dt, -1.f, 0.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		this->move(dt, 1.f, 0.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
		this->move(dt, 0.f, -1.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		this->move(dt, 0.f, 1.f);
}

void Entity::render(sf::RenderTarget* target)
{
	target->draw(this->shape);
}
