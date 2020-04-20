#include <game/ghost.h>
#include <common/input.h>

Ghost::Ghost() 
{
	this->addSprite("assets/Ghost.tga", 3);
	this->position = Vector2(Random::getRandomBetween(0, SCREENWIDTH), Random::getRandomBetween(0, SCREENHEIGHT));
	this->scale = Vector2(0.08f, 0.08f);
	this->rotation = 0;

	this->_speed = Random::getRandomBetween(12, 35);
}

void Ghost::update() 
{
	Vector2 targetPos = Vector2(SCREENWIDTH / 2, SCREENHEIGHT / 2);

	moveTowards(targetPos);
}

void Ghost::isShown(bool visible) 
{
	if (visible == true) 
	{
		if (this->scale < Vector2(0.08f, 0.08f)) 
		{
			this->scale += Vector2(2, 2) * Time::deltaTime();
		}
	}
	else 
	{
		this->scale = Vector2(0, 0);
	}
}

void Ghost::moveTowards(Vector2 target) 
{
	Vector2 direction = target - this->position;
	direction.normalize();

	angle = direction.getAngle() * RAD_TO_DEG;

	this->position += direction * _speed * Time::deltaTime();
}