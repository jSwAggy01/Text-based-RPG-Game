#include "Archer.h"
#include <iostream>

Archer::Archer(string userNameInput)
{
    name = userNameInput;
    attackStrength = arrowStrength;
    defense = shield; 
    health = 100;
}

// int Archer::attackDamage()
// {
//     return arrowStrength;
// }

// int Archer::defenseShield()
// {
//     return shield;
// }