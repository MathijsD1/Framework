#ifndef ACTOR_H
#define ACTOR_H

#include <common/sprite.h>

class Actor
{
public:
	void addSprite(Sprite* sprite);
private:
	Sprite* _sprite;
};

#endif
