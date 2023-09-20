#ifndef WIZARD_H
#define WIZARD_H
#include "Characters.h"

class Wizard : public Characters
{
    private:
    int wandStrength = 30;
    int bubbleShield = 25;

    public:
    Wizard(string userNameInput);
    // int attackDamage();
    // int defense();

};

#endif