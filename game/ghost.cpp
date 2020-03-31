#include <game/ghost.h>

Ghost::Ghost() 
{
	this->addSprite("assets/kingkong.tga", 1);

	this->position = Vector2(Random::getRandomBetween(0, SCREENWIDTH), Random::getRandomBetween(0, SCREENHEIGHT));
	this->scale = Vector2(1, 1);
	this->rotation = 0;
}

void Ghost::update() {

	Debug::printMessage("Ghost Update");

	moveTowards(Vector2(255, 125));
}

void Ghost::moveTowards(Vector2 target) 
{
	if (this->position != target) 
	{
		Vector2 direction = target - this->position;
		direction.normalize();

		this->position += direction * 25 * Time::deltaTime();
	}
}