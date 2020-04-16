#include <common/resourcemanager.h>

ResourceManager* ResourceManager::_instance = 0;

ResourceManager* ResourceManager::getInstance()
{
	if (ResourceManager::_instance == 0)
	{
		ResourceManager::_instance = new ResourceManager();
	}

	return _instance;
}

void ResourceManager::addCachedSprite(std::string path, Sprite* spr) 
{
	cachedSprites[path] = spr;
}

Sprite* ResourceManager::getCachedSprite(std::string path) 
{
	//Check if sprite is present at the given path
	if (cachedSprites.find(path) != cachedSprites.end()) 
	{
		return cachedSprites[path];
	}

	return nullptr;
}