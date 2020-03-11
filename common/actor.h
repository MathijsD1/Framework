#ifndef ACTOR_H
#define ACTOR_H

#include <common/sprite.h>
#include <vector>

class Actor
{
public:
	/**
	*  Adds a sprite to the Actor.
	*/
	void addSprite(Sprite* sprite);

	/**
	*  Getter of the children of this Actor.
	*/
	std::vector<Actor*>& getChildren() { return _children; }

	/**
	*  Update method which is called every frame (In the future).
	*/
	virtual void update();
private:
	/**
	*  Sprite of this Actor.
	*/
	Sprite* _sprite;

	/**
	*  Children of this Actor.
	*/
	std::vector<Actor*> _children;
};

#endif
