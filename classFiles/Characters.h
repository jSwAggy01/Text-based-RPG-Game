#ifndef CHARACTERS_H
#define CHARACTERS_H

#include <iostream>
using namespace std;

class Characters
{
    protected:
    
    string name;
    int health = 100;
    int attackStrength = 0;
    int defense = 0;
    
    public:
    
    const string getCharacterName();
    void setCharacterHealth(int attackStrength);
    int getCharacterStrength();
    int getCharacterDefense();
    int getCharacterHealth();
    void performAttack(Characters &Enemy, int attackStrength);
    void performDefense(Characters &Player, int enemyAttack, int defenseMultiplier);
    void printStatus();
    // void printEnemyStatus(); //not needed

    // string setCharacterName(string userInputName);
    // void attack();
    // void defense();

};





#endif