#ifndef SCENE_H
#define SCENE_H

#include <common/actor.h>

class Scene : public Actor
{
public:
	void updateScene();
private:
	void _updateActor(Actor* actor);
};

#endif
