#include <common/input.h>

Input* Input::_instance = 0;


Input::Input() {

}

Input::~Input() {

}

Input* Input::getInstance()
{
	if (Input::_instance == 0)
	{
		Input::_instance = new Input();
	}

	return _instance;
}

Vector2 Input::getMouseLocation()
{
	return Vector2(verticalMousePos, horizontalMousePos);
}
