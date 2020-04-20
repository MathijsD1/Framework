#include <game/gamescene.h>

GameScene::GameScene() 
{
	player = new Player();
	this->addChild(player);

	for (int i = 0; i < 20; i++)
	{
		Ghost* g = new Ghost();
		ghosts.push_back(g);

		this->addChild(g);
	}	
}

void GameScene::update() 
{
	for each (Ghost* g in ghosts)
	{
		if (g->angle > player->angle - 30 && g->angle < player->angle + 30)
		{
			g->isShown(true);
		}
		else {
			g->isShown(false);
		}

		Vector2 targetPos = Vector2(SCREENWIDTH / 2, SCREENHEIGHT / 2);

		if (g->position.getRounded() == targetPos.getRounded())
		{
			g->position = Vector2(Random::getRandomBetween(0, SCREENWIDTH), Random::getRandomBetween(0, SCREENHEIGHT));
		}
	}
}