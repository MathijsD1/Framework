#ifndef CORE_H
#define CORE_H

#include <common/renderer.h>
#include <common/scene.h>

class Core
{
public:
	/**
	*  Core constructor.
	*/
	Core();

	/**
	*  Core destructor
	*/
	~Core();

	/**
	*  Updates the screen and in the future the scene with all Actors.
	*/
	void run(Scene* scene);

	/**
	*  Getter of the Renderer.
	*/
	Renderer* getRenderer() { return _renderer; }

	/**
	*  Boolean to check if this core is currently doing something.
	*/
	bool isRunning = true;
private:
	/**
	*  Renderer of this Core.
	*/
	Renderer* _renderer = 0;
};

#endif
