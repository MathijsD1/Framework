#ifndef ACTOR_H
#define ACTOR_H

#include <common/sprite.h>
#include <common/time.h>
#include <common/vectorx.h>
#include <vector>

class Actor
{
public:
	/**
	*  Adds a sprite to the Actor.
	*/
	void addSprite(Sprite* sprite);

	/**
	*  Adds a sprite to the Actor.
	*/
	Sprite* getSprite() { return _sprite; }

	/**
	*  Getter of the children of this Actor.
	*/
	std::vector<Actor*>& getChildren() { return _children; }

	/**
	*  Update method which is called every frame.
	*/
	virtual void update() = 0;

	/**
	*  Scale of this Actor.
	*/
	Vector2 scale;

	/**
	*  Position of this Actor.
	*/
	Vector2 position;

	/**
	*  Rotation of this Actor.
	*/
	float rotation = 0;
private:
	/**
	*  Sprite of this Actor.
	*/
	Sprite* _sprite = 0;

	/**
	*  Children of this Actor.
	*/
	std::vector<Actor*> _children;
};

#endif
