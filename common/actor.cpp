#include <common/actor.h>
#include <common/resourcemanager.h>

int Actor::_nextID = 0;

Actor::Actor() 
{
	_id = _nextID;
	_nextID++;

	_parent = nullptr;

	position = Vector2(0.0f, 0.0f);
	rotation = 0;
	scale = Vector2(1, 1);

	_sprite = nullptr;
}

void Actor::addSprite(std::string path, int filterMode) 
{
	if (_sprite != nullptr) 
	{
		delete _sprite;
	}

	// If the sprite has been created before
	if (ResourceManager::getInstance()->getCachedSprite(path) != nullptr) 
	{
		this->_sprite = ResourceManager::getInstance()->getCachedSprite(path);
		return;
	}

	// If the sprite hasn't been created before
	Sprite* sprite = new Sprite(path);

	ResourceManager::getInstance()->addCachedSprite(path, sprite);

	this->_sprite = sprite;
	this->_sprite->setFilter(filterMode);
}

void Actor::addChild(Actor* child)
{
	if (child->_parent != nullptr) {
		child->_parent->removeChild(child);
	}
	child->_parent = this;
	this->_children.push_back(child);
}

void Actor::removeChild(Actor* child)
{
	std::vector<Actor*>::iterator it = _children.begin();
	while (it != _children.end()) {
		if ((*it)->_id == child->_id) {
			child->_parent = nullptr;
			it = _children.erase(it);
		}
		else {
			++it;
		}
	}
}