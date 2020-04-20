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
	void isShown(bool visible);
	void moveTowards(Vector2 target);
	float angle = 0;
private:
	float _speed = 10;
};

#endif
