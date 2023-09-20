#ifndef COMPANION_H
#define COMPANION_H
#include "Characters.h"

class Companion : public Characters
{
    private:

    int health = 100;
    std::string name;

    public:

    void healPlayer();
    void attackEnemy();

};

#endif