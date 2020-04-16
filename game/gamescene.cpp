#include <game/gamescene.h>
#include <game/ghost.h>
#include <game/player.h>

GameScene::GameScene() 
{
	Player* p = new Player();
	this->addChild(p);

	for (int i = 0; i < 50; i++)
	{
		Ghost* g = new Ghost();

		this->addChild(g);
	}	
}

void GameScene::update() 
{
	
}