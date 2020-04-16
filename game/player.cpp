#include <game/player.h>
#include <common/input.h>

Player::Player() 
{
	this->position = Vector2(SCREENWIDTH / 2, SCREENHEIGHT / 2);
	this->scale = Vector2(0.05f, 0.05f);
	this->rotation = 0;

	this->addSprite("assets/Player.tga", 1);
}

void Player::update() {

	lookTowardsMousePosition();
}

void Player::lookTowardsMousePosition() 
{
	Vector2 dir = this->position - Input::getInstance()->getMouseLocation();
	dir.normalize();

	this->rotation = dir.getAngle();
}