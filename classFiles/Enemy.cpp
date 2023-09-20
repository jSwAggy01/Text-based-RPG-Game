#include "Enemy.h"
#include <iostream>

Enemy::Enemy(std::string enemyName, int enemyHealth, int enemyStrength, int enemyDefense)
{

    name = enemyName;
    health = enemyHealth; 
    attackStrength = enemyStrength;
    defense = enemyDefense;

}

// void Enemy::performAttack()
// {
//    dosomething
// }