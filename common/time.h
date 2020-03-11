#ifndef TIME_H
#define TIME_H

class Time
{
public:
	/**
	*  Time constructor.
	*/
	Time();

	/**
	*  Time deconstructor.
	*/
	~Time();

	/**
	*  Getter of the Time instance.
	*/
	static Time* getInstance();

	/**
	*  Updates the current Delta Time.
	*/
	float updateDeltaTime();

	/**
	*  Getter of the current Delta Time.
	*/
	float getDeltaTime() { return _deltaTime; }
private:
	/**
	*  Singleton Time instance.
	*/
	static Time* _instance;

	/**
	*  Current Delta Time
	*/
	float _deltaTime = 0;
};

#endif
