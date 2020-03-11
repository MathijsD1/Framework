// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <GLFW/glfw3.h>

#include <common/core.h>

int main( void )
{
	Core core;

	do 
	{
		core.run();
	} 
	while (glfwGetKey(core.getRenderer()->window(), GLFW_KEY_ESCAPE) != GLFW_PRESS && glfwWindowShouldClose(core.getRenderer()->window()) == 0);

	return 0;
}
