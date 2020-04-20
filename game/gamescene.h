#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <common/scene.h>
#include <common/actor.h>

#include <game/ghost.h>
#include <game/player.h>

class GameScene : public Scene
{
public:
	GameScene();
	virtual void update();

private:
	std::vector<Ghost*> ghosts;

	Player* player;
};

#endif
