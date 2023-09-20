#ifndef ARCHER_H
#define ARCHER_H
#include "Characters.h"

class Archer : public Characters
{
    private:
    int arrowStrength = 10;
    int shield = 15;

    public:
    Archer(string userNameInput);
    // int attackDamage();
    // int defenseShield();

};


#endif