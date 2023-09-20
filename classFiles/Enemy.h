#ifndef ENEMY_H
#define ENEMY_H
#include "Characters.h"

class Enemy : public Characters
{
    private:

    int enemyHealth = 100;
    int enemyDefense = 0;
    int enemyStrength = 0;

    public:

    Enemy(string enemyName, int health, int attackDamage, int defense);
    // void performAttack();
};

#endif