#include <common/scene.h>

void Scene::updateScene() 
{
	_updateActor(this);
}

void Scene::_updateActor(Actor* actor) 
{
	actor->update();

	// Update all Children (recursively)
	std::vector<Actor*> children = actor->children();
	std::vector<Actor*>::iterator child;
	for (child = children.begin(); child != children.end(); child++) {
		this->_updateActor(*child);
	}
}