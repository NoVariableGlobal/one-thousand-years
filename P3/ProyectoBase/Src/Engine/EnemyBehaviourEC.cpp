#include "EnemyBehaviourEC.h"
#include "ComponentsManager.h"
#include "FactoriesFactory.h"
#include "Factory.h"
#include "Scene.h"
#include <Entity.h>
#include <json.h>
#include "TransformComponent.h"
#include "OgreRoot.h"
#include "RigidbodyPC.h"
#include <iostream>
#include "TridimensionalObjectRC.h"
#include <time.h>
#include <utility>
#include <value.h>

EnemyBehaviourEC::EnemyBehaviourEC()
    : speed(0.0f), playerSpeedPercentage(0.0f), attack(0),
      attackCooldown(0.0f) {}

EnemyBehaviourEC::~EnemyBehaviourEC() {}

void EnemyBehaviourEC::checkEvent() {
    TransformComponent* transform = dynamic_cast<TransformComponent*>(
        father->getComponent("TransformComponent"));
    RigidbodyPC* rb =
        dynamic_cast<RigidbodyPC*>(
        father->getComponent("RigidbodyPC"));

    // obtain player position
    TransformComponent* playerTransform = dynamic_cast<TransformComponent*>(
        scene->getEntitybyId("Player")->getComponent("TransformComponent"));
    Ogre::Vector3 playerPosition = playerTransform->getPosition();

    Ogre::Vector3 directionToPlayer =
        Ogre::Vector3(playerPosition.x - transform->getPosition().x,
                      playerPosition.y - transform->getPosition().y,
                      playerPosition.z - transform->getPosition().z)
            .normalisedCopy();

	// check collision with player
    collisionWithPlayer = rb->collidesWith("Player");

	// if not colliding with player enemy moves towards player
    if (!collisionWithPlayer) {
        Ogre::Vector3 velocity = Ogre::Vector3(directionToPlayer.x * speed, 0.0f, directionToPlayer.z * speed);
        rb->setLinearVelocity(velocity);
	}

	// set orientation towards player
    float angleInRad =
            atan2(transform->getPosition().y - playerTransform->getPosition().y,
            transform->getPosition().x - playerTransform->getPosition().x);
    float angleInDeg = -angleInRad * 180 / M_PI;
    // Make the rotation
    TridimensionalObjectRC* fatherRender =
        dynamic_cast<TridimensionalObjectRC*>(
            father->getComponent("TridimensionalObjectRC"));
    fatherRender->rotate(angleInDeg - 90, Ogre::Vector3(0, 1, 0));
}

bool EnemyBehaviourEC::timeToAttack() {
    float seconds = clock() / static_cast<float>(CLOCKS_PER_SEC);

    if (seconds - lastTimeAttacked >= attackCooldown) {
        lastTimeAttacked = seconds;
        return true;
    }

    return false;
}

bool EnemyBehaviourEC::getCollisionWithPlayer() { return collisionWithPlayer; }

void EnemyBehaviourEC::setCollisionWithPlayer(bool _collisionWithPlayer) {
    collisionWithPlayer = _collisionWithPlayer;
}

float EnemyBehaviourEC::getSpeed() { return speed; }

float EnemyBehaviourEC::getPlayerSpeedPercentage() {
    return playerSpeedPercentage;
}

int EnemyBehaviourEC::getAttack() { return attack; }

float EnemyBehaviourEC::getAttackCooldown() { return attackCooldown; }

float EnemyBehaviourEC::getLastTimeAttacked() { return lastTimeAttacked; }

void EnemyBehaviourEC::setSpeed(float _speed) { speed = _speed; }

void EnemyBehaviourEC::setPlayerSpeedPercentage(
    float _playerSpeedPercentage) {
    playerSpeedPercentage = _playerSpeedPercentage;
}

void EnemyBehaviourEC::setAttack(float _attack) { attack = _attack; }

void EnemyBehaviourEC::setAttackCooldown(float _attackCooldown) {
    attackCooldown = _attackCooldown;
}

void EnemyBehaviourEC::setLastTimeAttacked(float _lastTimeAttacked) {
    lastTimeAttacked = _lastTimeAttacked;
}

