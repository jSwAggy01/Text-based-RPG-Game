#ifndef WARRIOR_H
#define WARRIOR_H
#include "Characters.h"

class Warrior : public Characters
{
    private:
    int swordSharpness = 20;
    int armorDefense = 20;

    public:

    Warrior(string userNameInput);
    // int attackDamage();
    // int defense();


};

#endif