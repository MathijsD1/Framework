#include <common/core.h>
#include <common/camera.h>

Core::Core() 
{
	_renderer = new Renderer(1280, 720);
}

Core::~Core() 
{
	delete _renderer;
}

void Core::run() 
{
	float deltaTime = _renderer->updateDeltaTime();

	computeMatricesFromInputs(_renderer->window(), deltaTime);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glfwSwapBuffers(_renderer->window());
	glfwPollEvents();
}