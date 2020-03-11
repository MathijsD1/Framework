#ifndef CORE_H
#define CORE_H

#include <common/renderer.h>

class Core
{
public:
	Core();
	~Core();

	void run();

	Renderer* getRenderer() { return _renderer; }

	bool isRunning = true;
private:
	Renderer* _renderer = 0;
};

#endif
