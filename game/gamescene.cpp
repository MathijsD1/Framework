#include <game/gamescene.h>
#include <game/ghost.h>
#include <game/player.h>

GameScene::GameScene() 
{
	
	for (int i = 0; i < 10; i++)
	{
		Ghost* g = new Ghost();

		this->addChild(g);
	}

	Player* p = new Player();
	this->addChild(p);
	
}

void GameScene::update() 
{
	
}