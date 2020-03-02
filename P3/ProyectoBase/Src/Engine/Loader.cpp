#include "Loader.h"
#include "Entity.h"
#include "FactoriesFactory.h"
#include "Factory.h"
#include "Ogre.h"
#include "OgreVector3.h"

#include <json.h>
#include <fstream>
#include <string>

Loader::Loader() {}

Loader::~Loader() {}

void Loader::readScenes(std::map<std::string, std::string>& _scenesQueue)
{
	std::fstream file;
	file.open("Files/scenes.json");

	if (file.is_open())
	{
		Json::Value data;
		file >> data;
		data = data["scenes"];

		int numScenes = data.size();
		for (int i = 0; i < numScenes; i++)
			_scenesQueue.emplace(data[i]["name"].asString(), data[i]["file"].asString());
	}
	else
	{
		// LANZAR EXCEPCION
	}

}

void Loader::readEntities(std::string _fileName, std::map<std::string, Entity*>& _entities)
{
	std::fstream file;
	file.open("Files/" + _fileName);

	if (file.is_open())
	{
		Json::Value data;
		file >> data;
		data = data["entities"];

		int numEntities = data.size();
		for (int i = 0; i < numEntities; i++)
			createEntity(data[i], i, _entities);
	}
	else
	{
		// LANZAR EXCEPCION
	}
}

void Loader::createEntity(Json::Value& _data, int _it, std::map<std::string, Entity*>& _entities)
{
	Entity* entity = new Entity();

	// ID of the Entity
	entity->setId(_data["id"].asString());

	// List of COMPONENTS to add to the Entity
	Json::Value components = _data["components"];

	int numComponents = components.size();
	for (int i = 0; i < numComponents; i++)
		entity->addComponent(components[i]["type"].asString(), FactoriesFactory::instance()->find(components[i]["type"].asString())->create(entity, components[i]["attributes"]));

	_entities.emplace(entity->getId(), entity);
}
