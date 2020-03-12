#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <common/scene.h>
#include <common/actor.h>

class GameScene : public Scene
{
public:
	GameScene();
	virtual void update();
};

#endif
