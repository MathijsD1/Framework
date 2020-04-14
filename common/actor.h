#ifndef ACTOR_H
#define ACTOR_H

#include <common/sprite.h>
#include <common/time.h>
#include <common/config.h>
#include <common/vectorx.h>

#include <string>
#include <vector>

class Actor
{
public:
	/**
	*  Actor constructor.
	*/
	Actor();

	/**
	*  Actor parent.
	*/
	const Actor* getParent() { return _parent; };

	/**
	*  Adds a sprite to the Actor and sets the filter mode. 
	*/
	void addSprite(std::string path, int filterMode = 1);

	/**
	*  Getter of the sprite of the Actor.
	*/
	Sprite* getSprite() { return _sprite; }

	/**
	*  Getter of the children of this Actor.
	*/
	const std::vector<Actor*>& children() { return _children; };

	/**
	*  Update method which is called every frame.
	*/
	virtual void update() = 0;

	/**
	* Adds a Actor as a child.
	*/
	void addChild(Actor* child);

	/**
	* Removes a Actor as a child.
	*/
	void removeChild(Actor* child);

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

	/**
	*  Getter of the Actor ID.
	*/
	int id() { return _id; };

private:
	/**
	*  Sprite of this Actor.
	*/
	Sprite* _sprite = 0;

	/**
	*  Children of this Actor.
	*/
	std::vector<Actor*> _children;

	/**
	*  Parent of this Actor.
	*/
	Actor* _parent;

	/**
	*  The ID of this Actor.
	*/
	int _id;

	/**
	*  The ID the next Actor should have.
	*/
	static int _nextID;

};

#endif
