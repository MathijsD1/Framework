#include <game/gamescene.h>

GameScene::GameScene() 
{
	player = new Player();
	this->addChild(player);

	for (int i = 0; i < 5; i++)
	{
		Ghost* g = new Ghost();
		ghosts.push_back(g);

		this->addChild(g);
	}	
}


void GameScene::update() 
{
	updateGame();
}

void GameScene::updateGame() 
{
	// Survival Score
	player->score += 100 * Time::deltaTime();

	for each (Ghost * g in ghosts)
	{
		Vector2 diff = g->position - player->position;
		float distance = diff.getLength();


		if (g->angle > player->angle - 45 && g->angle < player->angle + 45 && distance <= 300)
		{
			g->isShown(true);
			g->damage(50);

			// Damaging Score
			player->score += 50 * Time::deltaTime();
		}
		else
		{
			if (distance <= 50)
			{
				g->isShown(true);
			}
			else {
				g->isShown(false);
			}
		}


		Vector2 targetPos = Vector2(SCREENWIDTH / 2, SCREENHEIGHT / 2);

		if (g->position.getRounded() == targetPos.getRounded())
		{

			// Damage Score Penalty
			player->score -= 50;

			player->damage(25);
			g->respawn();
		}
	}

	// Reset Game
	if (player->getHealth() <= 0)
	{
		std::cout << "" << std::endl;
		std::cout << "The player has died!!" << std::endl;
		std::cout << "Your score was: " << player->score << std::endl;
		player->reset();

		for each (Ghost * g in ghosts)
		{
			g->respawn();
		}
	}
}