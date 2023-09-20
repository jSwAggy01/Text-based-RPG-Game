#include "gtest/gtest.h"
#include <iostream>
#include "../classFiles/Characters.h"
#include "../classFiles/Wizard.h"
#include "../classFiles/Warrior.h"
#include "../classFiles/Archer.h"
#include "../classFiles/Enemy.h"
#include "../classFiles/Companion.h"

TEST(testUnitTest, testOne)
{
    FAIL();
}

TEST(finalProjectTests, testValidInput)
{
    int userChoice = 4;
    if(userChoice != 1 && userChoice != 2 && userChoice != 3)
    {
        FAIL();
    }
    SUCCEED();
}

TEST(finalProjectTests, testValidInputTwo)
{
    int userChoice = 2;
    if(userChoice != 1 && userChoice != 2 && userChoice != 3)
    {
        FAIL();
    }
    SUCCEED();
}

TEST(finalProjectTests, testGetNameArcher)
{
    std::string userInputName = "nameTest";
    Archer myArcher(userInputName);
    ASSERT_EQ(userInputName, myArcher.getCharacterName());
}

TEST(finalProjectTests, testGetNameWarrior)
{
    std::string userInputName = "nameTest";
    Warrior myWarrior(userInputName);
    ASSERT_EQ(userInputName, myWarrior.getCharacterName());
}

TEST(finalProjectTests, testGetNameWizard)
{
    std::string userInputName = "nameTest";
    Wizard myWizard(userInputName);
    ASSERT_EQ(userInputName, myWizard.getCharacterName());
}

TEST(finalProjectTests, testAttacksArcher)
{
    Archer myArcher("Jeff");
    Enemy myEnemy("BadGuy", 100, 10, 10);

    myArcher.performAttack(myEnemy, myArcher.getCharacterStrength());

    ASSERT_EQ(myEnemy.getCharacterHealth(), 90);

}

TEST(finalProjectTests, testAttacksWizard)
{
    Wizard myWizard("Jeff");
    Enemy myEnemy("BadGuy", 100, 10, 10);

    myWizard.performAttack(myEnemy, myWizard.getCharacterStrength());

    ASSERT_EQ(myEnemy.getCharacterHealth(), 70);

}

TEST(finalProjectTests, testAttacksWarrior)
{
    Warrior myWarrior("Jeff");
    Enemy myEnemy("BadGuy", 100, 10, 10);

    myWarrior.performAttack(myEnemy, myWarrior.getCharacterStrength());

    ASSERT_EQ(myEnemy.getCharacterHealth(), 80);
}

TEST(finalProjectTests, testArcherDefense)
{
    Archer myArcher("Jeff");
    Enemy myEnemy("BadGuy", 100, 50, 10);

    myArcher.performDefense(myArcher, myEnemy.getCharacterStrength(), 2);

    ASSERT_EQ(myArcher.getCharacterHealth(), 80);

}

TEST(finalProjectTests, testWarriorDefense)
{
    Warrior myWarrior("Jeff");
    Enemy myEnemy("BadGuy", 100, 50, 10);

    myWarrior.performDefense(myWarrior, myEnemy.getCharacterStrength(), 2);

    ASSERT_EQ(myWarrior.getCharacterHealth(), 115);  

}

TEST(finalProjectTests, testWizardDefense)
{
    Wizard myWizard("Jeff");
    Enemy myEnemy("BadGuy", 100, 50, 10);

    myWizard.performDefense(myWizard, myEnemy.getCharacterStrength(), 2);

    ASSERT_EQ(myWizard.getCharacterHealth(), 75);

}    

TEST(finalProjectTests, testStatusFunction)
{
    Archer myArcher("Jeff");
    Enemy myEnemy("BadGuy", 100, 50, 10);

    myArcher.performDefense(myArcher, myEnemy.getCharacterStrength(), 2);
    EXPECT_NO_THROW(myArcher.printStatus());

}

TEST(finalProjectTests, testBothStatusFunction)
{
    Archer myArcher("Jeff");
    Enemy myEnemy("BadGuy", 100, 50, 10);

    myArcher.performDefense(myArcher, myEnemy.getCharacterStrength(), 2);
    myArcher.performAttack(myEnemy, myArcher.getCharacterStrength());

    EXPECT_NO_THROW(myArcher.printStatus());
    EXPECT_NO_THROW(myEnemy.printStatus());
    
}