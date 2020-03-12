#include <game/ghost.h>

Ghost::Ghost() 
{
	this->addSprite(new Sprite("assets/kingkong.tga"));

	this->position = Vector2(SCREENWIDTH / 2, SCREENHEIGHT / 2);
	this->scale = Vector2(1, 1);
	this->rotation = 30;
}

void Ghost::update() {
	this->scale += Vector2(0.01, 0.01f) * Time::deltaTime();
}