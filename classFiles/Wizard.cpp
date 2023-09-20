#include "Wizard.h"
#include <iostream>

Wizard::Wizard(string userNameInput)
{
    name = userNameInput;
    attackStrength = wandStrength;
    defense = bubbleShield;
    health = 75;
}

// int Wizard::attackDamage()
// {
//     return wandStrength;
// }

// int Wizard::defense()
// {
//     return bubbleShield;
// }