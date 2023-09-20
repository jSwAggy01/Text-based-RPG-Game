#include "Warrior.h"
#include <iostream>

Warrior::Warrior(string userNameInput)
{
    name = userNameInput;
    attackStrength = swordSharpness;
    defense = armorDefense;
    health = 125;
}

// int Warrior::attackDamage()
// {
//     return swordSharpness;
// }

// int Warrior::defense()
// {
//     return armorDefense;
// }
