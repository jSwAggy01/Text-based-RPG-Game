#include "Characters.h"
#include <iostream>

using namespace std;

const string Characters::getCharacterName()
{

    return name;

}

void Characters::setCharacterHealth(int attackStrength)
{
    this->health = this->health - attackStrength;
}

int Characters::getCharacterStrength()
{

    return this->attackStrength;

}

int Characters::getCharacterDefense()
{

    return this->defense;

}

int Characters::getCharacterHealth()
{
    return health;
}

void Characters::performAttack(Characters &Enemy, int attackStrength)
{

    Enemy.setCharacterHealth(attackStrength);
    
}

void Characters::performDefense(Characters &Player, int enemyAttack, int defenseMultiplier)
{
    int playerDamage = enemyAttack - (Player.getCharacterDefense() * defenseMultiplier);
    Player.setCharacterHealth(playerDamage);
}

void Characters::printStatus()
{
    cout << this->name << " has " << this->health << " HP\n";
    cout << "with " << this->attackStrength << " strength ";
    cout << "and " << this->defense << " defense.\n" << endl;
}

// void Characters::printEnemyStatus()
// {
//     cout << this->name << " has " << this->health << " HP\n";
//     cout << "with " << this->attackStrength << " strength ";
//     cout << "and " << this->defense << " defense.\n";
// } // not needed

// string Characters::setCharacterName(string userInputName)
// {

//     name = userInputName;

// }