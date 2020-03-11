// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <GLFW/glfw3.h>

#include <common/core.h>
#include <common/camera.h>

int main( void )
{
	Core core;

	do 
	{
		float deltaTime = core.getRenderer()->updateDeltaTime();

		computeMatricesFromInputs(core.getRenderer()->window(), deltaTime);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		glfwSwapBuffers(core.getRenderer()->window());
		glfwPollEvents();
	} 
	while (glfwGetKey(core.getRenderer()->window(), GLFW_KEY_ESCAPE) != GLFW_PRESS && glfwWindowShouldClose(core.getRenderer()->window()) == 0);

	return 0;
}
