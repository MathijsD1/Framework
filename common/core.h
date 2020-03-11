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
private:
	Renderer* _renderer = 0;
};

#endif
