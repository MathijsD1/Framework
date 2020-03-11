#ifndef ACTOR_H
#define ACTOR_H

#include <common/sprite.h>
#include <vector>

class Actor
{
public:
	void addSprite(Sprite* sprite);
	std::vector<Actor*>& getChildren() { return _children; }
	virtual void update();
private:
	Sprite* _sprite;
	std::vector<Actor*> _children;
};

#endif
