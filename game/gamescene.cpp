#include <game/gamescene.h>

GameScene::GameScene() 
{
	Actor* monkey = new Actor();
	monkey->addSprite(new Sprite("assets/kingkong.tga"));

	this->getChildren().push_back(monkey);
}