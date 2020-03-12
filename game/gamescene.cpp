#include <game/gamescene.h>
#include <game/ghost.h>

GameScene::GameScene() 
{
	Ghost* g = new Ghost();

	this->addChild(g);
}

void GameScene::update() 
{
	std::cout << "Gamescene Update" << std::endl;
}