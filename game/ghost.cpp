#include <game/ghost.h>
#include <common/debug.h>

Ghost::Ghost() 
{
	this->addSprite("assets/kingkong.tga", 1);

	this->position = Vector2(SCREENWIDTH / 2, SCREENHEIGHT / 2);
	this->scale = Vector2(1, 1);
	this->rotation = 30;
}

void Ghost::update() {
	this->scale += Vector2(0.1f, 0.1f) * Time::deltaTime();
	
	Debug::printMessage("Ghost Update");
}