#ifndef RESOURCEMANAGER_H
#define RESOURCEMANAGER_H

#include <map>
#include <iostream>
#include <cassert>

#include <common/sprite.h>

class ResourceManager
{
public:
	static ResourceManager* getInstance();
	Sprite* getCachedSprite(std::string path);
	void addCachedSprite(std::string path, Sprite*);
private:
	static ResourceManager* _instance;
	std::map<std::string, Sprite*> cachedSprites;
};

#endif
