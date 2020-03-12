#ifndef GHOST_H
#define GHOST_H

#include <common/actor.h>

class Ghost : public Actor
{
public:
	Ghost();
	virtual void update();
};

#endif
