#include <common/core.h>
#include <game/gamescene.h>
#include <vector>

int main( void )
{
	Core core;
	GameScene gameScene;

	do 
	{
		core.run(&gameScene);
	} 
	while (core.isRunning);

	return 0;
}
