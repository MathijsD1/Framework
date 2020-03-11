// Include GLFW
#include <GLFW/glfw3.h>

#include <common/time.h>
#include <iostream>

Time* Time::_instance = 0;

Time::Time() 
{
	std::cout << "Constructed new Time Instance" << std::endl;
}

Time::~Time() 
{
	std::cout << "Deconstructed Time Instance" << std::endl;
}

Time* Time::getInstance()
{
	if (Time::_instance == 0)
	{
		Time::_instance = new Time();
	}

	return _instance;
}

float Time::updateDeltaTime() {
	// lastTime is initialised only the first time this function is called
	static double lastTime = glfwGetTime();
	// get the current time
	double currentTime = glfwGetTime();

	// Compute time difference between current and last time
	float deltaTime = float(currentTime - lastTime);
	_deltaTime = deltaTime;

	// For the next frame, the "last time" will be "now"
	lastTime = currentTime;
	return deltaTime;
}