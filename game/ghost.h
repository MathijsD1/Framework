#ifndef GHOST_H
#define GHOST_H

#include <common/actor.h>
#include <common/vectorx.h>
#include <common/debug.h>
#include <common/random.h>


class Ghost : public Actor
{
public:
	Ghost();
	virtual void update();
	void moveTowards(Vector2 target);
private:
	float _speed = 10;
};

#endif
