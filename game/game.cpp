#include <common/core.h>

int main( void )
{
	Core core;

	do 
	{
		core.run();
	} 
	while (core.isRunning);

	return 0;
}
