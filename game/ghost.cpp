#include <game/ghost.h>
#include <common/debug.h>

Ghost::Ghost() 
{
	this->addSprite("assets/kingkong.tga", 1);

	this->position = Vector2(SCREENWIDTH / 2, SCREENHEIGHT / 2);
	this->scale = Vector2(1, 1);
	this->rotation = 0;
}

void Ghost::update() {

	Debug::printMessage("Ghost Update");
	moveTowards(Vector2(255, 125));
}

void Ghost::moveTowards(Vector2 target) 
{
	Vector2 direction = target - this->position;
	direction.normalize();

	this->position += direction * 100 * Time::deltaTime();
}