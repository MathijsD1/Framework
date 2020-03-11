#ifndef TIME_H
#define TIME_H

class Time
{
public:
	static Time* getInstance();
	float updateDeltaTime();
	float getDeltaTime() { return _deltaTime; }
private:
	static Time* _instance;
	float _deltaTime = 0;
};

#endif
