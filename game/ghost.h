#ifndef GHOST_H
#define GHOST_H

#include <common/actor.h>
#include <common/vectorx.h>

class Ghost : public Actor
{
public:
	Ghost();
	virtual void update();
	void moveTowards(Vector2 target);
};

#endif
