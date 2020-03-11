// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <GLFW/glfw3.h>

#include <common/core.h>
#include <common/camera.h>

Core::Core() 
{
	// Create a new Renderer
	_renderer = new Renderer(1280, 720);

	// Is the core doing something?
	isRunning = true;
}

Core::~Core() 
{
	// Delete the renderer
	delete _renderer;
}

void Core::run() 
{
	// Update the Delta Time
	float deltaTime = _renderer->updateDeltaTime();

	// Compute Matrices
	computeMatricesFromInputs(_renderer->window(), deltaTime);

	// Clear Screen
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Swap Buffers
	glfwSwapBuffers(_renderer->window());
	glfwPollEvents();

	if (glfwGetKey(_renderer->window(), GLFW_KEY_ESCAPE) == GLFW_PRESS && glfwWindowShouldClose(_renderer->window()) == 0)
	{
		isRunning = false;
	}
}