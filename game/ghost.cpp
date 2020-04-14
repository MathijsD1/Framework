#include <game/ghost.h>

Ghost::Ghost() 
{
	this->addSprite("assets/rgba.tga", 1);
	this->getSprite()->setFilter(1);

	this->position = Vector2(Random::getRandomBetween(0, SCREENWIDTH), Random::getRandomBetween(0, SCREENHEIGHT));
	this->scale = Vector2(1, 1);
	this->rotation = 0;

	this->_speed = Random::getRandomBetween(12, 35);
}

void Ghost::update() {

	Debug::printMessage("Ghost Update");

	moveTowards(Vector2(SCREENWIDTH / 2, SCREENHEIGHT / 2));
}

void Ghost::moveTowards(Vector2 target) 
{
	Vector2 direction = target - this->position;
	direction.normalize();

	this->position += direction * _speed * Time::deltaTime();
}