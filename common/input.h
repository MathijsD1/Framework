#ifndef INPUT_H
#define INPUT_H

#include <common/vectorx.h>

class Input
{
public:
	Input();
	~Input();
	static Input* getInstance();
	Vector2 getMouseLocation();
	double verticalMousePos;
	double horizontalMousePos;

private:
	static Input* _instance;
	Vector2 _mouseLocation;
};

#endif
