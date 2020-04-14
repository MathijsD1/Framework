#include <game/gamescene.h>
#include <game/ghost.h>

GameScene::GameScene() 
{
	for (int i = 0; i < 10; i++)
	{
		Ghost* g = new Ghost();

		this->addChild(g);
	}
}

void GameScene::update() 
{
	
}