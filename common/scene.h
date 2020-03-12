#ifndef SCENE_H
#define SCENE_H

#include <common/actor.h>

class Scene : public Actor
{
public:
	/**
	*  Updates the Scene and all Actors within.
	*/
	void updateScene();
private:
	/**
	*  Updates a Actor and all children within.
	*/
	void _updateActor(Actor* actor);
};

#endif
