#include <common/random.h>

float Random::getRandomBetween(float min, float max) 
{
	float random = ((float)rand()) / (float)RAND_MAX;
	float diff = max - min;
	float r = random * diff;
	return min + r;
}
