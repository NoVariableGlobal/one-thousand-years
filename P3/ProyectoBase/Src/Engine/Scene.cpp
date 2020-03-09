#include "Scene.h"
#include "Game.h"
#include "Entity.h"
#include "FactoriesFactory.h"
#include "Loader.h"
#include "TransformComponent.h"
#include "ComponentsManager.h"
#include "CameraObject.h"
#include "PhysicsContext.h"
#include <iostream>
#include "OgreVector3.h"


Scene::Scene() {
	componentManager = new ComponentsManager();
	cam = new CameraObject();
	PhysicsContext::instance()->init(0);
	PhysicsContext::instance()->createRB(Ogre::Vector3(10,10,10), Ogre::Vector3(10, 10, 10), 1);
}

Scene::~Scene() 
{
	for (auto it : entities)
	{
		delete it.second;
	}
	delete componentManager;
	delete cam;
  PhysicsContext::instance()->destroyWorld();
	
}

void Scene::load(std::string name) {  
    Loader loader;
    loader.readEntities(name, entities, componentManager);
}

void Scene::update() 
{
	componentManager->update();
	componentManager->handleInput();
	componentManager->render();
	componentManager->updateSound();
	PhysicsContext::instance()->updateSimulation();
}

Entity* Scene::getEntitybyId(std::string id)
{
    return entities.find(id)->second;
}

void Scene::clearComponentsManager()
{
	componentManager->clearComponents();
}
