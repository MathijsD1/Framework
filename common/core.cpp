#include <common/core.h>

Core::Core() 
{
	_renderer = new Renderer(1280, 720);
}

Core::~Core() 
{
	delete _renderer;
}