#ifndef PLAYER_H
#define PLAYER_H

#include <common/actor.h>
#include <common/vectorx.h>
#include <common/debug.h>
#include <common/random.h>

class Player : public Actor
{
public:
	Player();
	virtual void update();
	float angle = 0;
	float getHealth() { return _health; }
	void damage(float amount);
	void reset();
	float score = 0;
private:
	void lookTowardsMousePosition();
	float _health = 100;
};

#endif
