#include <iostream>
#include "classFiles/Characters.h"
#include "classFiles/Wizard.h"
#include "classFiles/Warrior.h"
#include "classFiles/Archer.h"
#include "classFiles/Enemy.h"

void gameOver();
void doggoPetting(int);

using namespace std;

int main () {
    int i = 0;
    string userInput = "";
    bool userInputAccepted = true;
    string characterName = "";

    int userChoice = 0;
    cout << "Please select your class from Wizard (1), Warrior (2), or Archer (3) \n";
    cin >> userChoice;

    while (userChoice != 1 && userChoice != 2 && userChoice != 3)
    {
        cout << "Invalid Choice!\n";
        cout << "Select (1) Wizard, (2) Warrior, (3) Archer.\n" << endl;
        cin >> userChoice;
    }

    if(userChoice == 1)
    { // wizard
        cout << "Enter a Wizard name \n";
        string userInput;

        cin >> userInput;
        characterName = userInput;
        Wizard myWizardClass(userInput);
        cout << "Your name is " << myWizardClass.getCharacterName() << endl;
    }
    else if (userChoice == 2)
    { // warrior

        cout << "Enter a Warrior name \n";
        string userInput;
        cin >> userInput;
        characterName = userInput;
        Warrior myWarriorClass(userInput);
        cout << "Your name is " << myWarriorClass.getCharacterName() << endl;

    }
    else
    { // archer

        cout << "Enter an Archer name \n";
        string userInput;
        cin >> userInput;
        characterName = userInput;
        Archer myArcherClass(userInput);
        cout << "Your name is " << myArcherClass.getCharacterName() << endl;

    }
    
    cout << "Press any key to continue . . .\n";

    cin.ignore();
    cin.get();

// Hardcoded game:

    cout 
        << "You wake up from what seems to be an arduous but restful sleep. Having navigated the vageries of last night's nightmarish events, you step "
        << "out of the cave that sheltered you from the elements of mother nature. Outside, the cool, crisp winter air fills your lungs with oxygen. It's " 
        << "snowing now, a white fog surrounds the cave. To your left, a forest inhabitated by skeleton-like pine trees, footsteps can be seen in the snow, "
        << "heading in that direction. To your right, your snow mobile.\n\n RIGHT or LEFT: ";
    
    while (userInputAccepted != false) {
        cin >> userInput;
        cout << endl;
        if (userInput.at(0) == 'r' || userInput.at(0) == 'R') {
            cout 
                << "Walking over to the snow mobile, you see the key still in the ignition. Are you sure you want to give up your search?\n\nYES/NO: ";
                cin >> userInput;
            if (userInput.at(0) == 'y' || userInput.at(0) == 'Y') {
                cout
                    << "Taking one last look at the forest, you come to the conclusion that maybe you're better off saving your own skin. Live to fight another "
                    << "day, that's what Dad would say. You start the ignition, and drive off into the clearing of trees from whence you came. A ghastly shriek "
                    << "can be heard directly behind you. You shed a tear and close your eyes, as you already know how this ends.\n"
                    << "\n[Insert monster noises]\n";
                gameOver();
            }
            else {
                cout << "To your left, a forest inhabitated by skeleton-like pine trees, footsteps can be seen in the snow, heading in that direction.\n\n RIGHT or LEFT: ";
            }
        }
        else if (userInput.at(0) == 'l' || userInput.at(0) == 'L') { // CORRECT
            cout
                << "Walking in the direction of the forest, you stop right in front of the footprints. The trail leads on, deeper into the waking wood. Rustling "
                << "can be heard from a thicket of bushes close by. Suddenly, a shadowy figure leaps out of the of shrubs! You fall back on your rear in shock! "
                << "Collecting your composure, you see that it's a golden retriever. It gives you a nice friendly sniff on your left hand, and then a lick.\n"
                << "\nDOGGO HAS BECOME YOUR COMPANION\n"
                << "\nStanding back up on your feet, you are ready to follow the trail. To your right, the footprints continue. To your left, DOGGO.\n\n RIGHT OR LEFT: ";
            while (userInputAccepted != false) {
                cin >> userInput;
                cout << endl;
                if (userInput.at(0) == 'r' || userInput.at(0) == 'R') { // CORRECT
                    cout
                        << "You travel further into the forest. The downpour of snow seeming to cease the further you follow the footprints. Suddenly, it is silent. "
                        << "The snow has ceased to fall. And the opacity from the snow starts to clear. As your field of vision increases, you see a faint figure, "
                        << "directly 10 feet in front of you.\n\n*Insert battle noise\n\n"
                        << "The image of the figure renders as it comes closer.\n\nIt's... MAGIC MAN!\n\nYou're sworn nemesis!\n\nFIGHT!\n\n*Insert fight music\n\n";

                    /* >>>>>>>INSERT COMBAT MODE HERE <<<<<<<<<<<*/
                    Enemy myEnemyClass("Magic Man", 100, 15, 10);

                    if(userChoice == 1)
                    {
                        Wizard myWizardClass(characterName);

                        while (myWizardClass.getCharacterHealth() > 0 && myEnemyClass.getCharacterHealth() >= 0)
                        {
                            cout << "Do you want to Attack or Defend? \n\n ATTACK or DEFEND \n\n";
                            cin >> userInput;
                            cout << endl;

                            if(userInput.at(0) == 'a' || userInput.at(0) == 'A')
                            {
                                myWizardClass.performAttack(myEnemyClass, myWizardClass.getCharacterStrength());
                                myEnemyClass.performAttack(myWizardClass, myEnemyClass.getCharacterStrength());
                                myWizardClass.printStatus();
                                myEnemyClass.printStatus();
                            }
                            else
                            {
                                myWizardClass.performDefense(myEnemyClass, myEnemyClass.getCharacterStrength(), 2);
                                myWizardClass.performAttack(myEnemyClass, myEnemyClass.getCharacterStrength());
                                myWizardClass.printStatus();
                                myEnemyClass.printStatus();
                            }
                            if(myWizardClass.getCharacterHealth() <= 0)
                            {
                                cout << "YOU DIED!\n\n";
                                break;
                            }
                            if(myEnemyClass.getCharacterHealth() <= 0)      
                            {
                                cout << myEnemyClass.getCharacterName() << " HAS DIED!\n\n";
                                break;
                            }
                        }
                    } 
                    else if(userChoice == 2)
                    {
                        Warrior myWarriorClass(characterName);

                        while (myWarriorClass.getCharacterHealth() > 0 && myEnemyClass.getCharacterHealth() >= 0)
                        {
                            cout << "Do you want to Attack or Defend? \n\n ATTACK or DEFEND \n\n";
                            cin >> userInput;
                            cout << endl;

                            if(userInput.at(0) == 'a' || userInput.at(0) == 'A')
                            {
                                myWarriorClass.performAttack(myEnemyClass, myWarriorClass.getCharacterStrength());
                                myEnemyClass.performAttack(myWarriorClass, myEnemyClass.getCharacterStrength());
                                myWarriorClass.printStatus();
                                myEnemyClass.printStatus();
                            }
                            else
                            {
                                myWarriorClass.performDefense(myEnemyClass, myEnemyClass.getCharacterStrength(), 2);
                                myWarriorClass.performAttack(myEnemyClass, myEnemyClass.getCharacterStrength());
                                myWarriorClass.printStatus();
                                myEnemyClass.printStatus();
                            }
                            if(myWarriorClass.getCharacterHealth() <= 0)
                            {
                                cout << "YOU DIED!\n\n";
                                break;
                            }
                            if(myEnemyClass.getCharacterHealth() <= 0)   
                            {
                                cout << myEnemyClass.getCharacterName() << " HAS DIED!\n\n";
                                break;
                            }
                        }   
                    }
                    else
                    {
                        Archer myArcherClass(characterName);

                        while (myArcherClass.getCharacterHealth() > 0 && myEnemyClass.getCharacterHealth() >= 0)
                        {
                            cout << "Do you want to Attack or Defend? \n\n ATTACK or DEFEND \n\n";
                            cin >> userInput;
                            cout << endl;

                            if(userInput.at(0) == 'a' || userInput.at(0) == 'A')
                            {
                                myArcherClass.performAttack(myEnemyClass, myArcherClass.getCharacterStrength());
                                myEnemyClass.performAttack(myArcherClass, myEnemyClass.getCharacterStrength());
                                myArcherClass.printStatus();
                                myEnemyClass.printStatus();
                            }
                            else
                            {
                                myArcherClass.performDefense(myEnemyClass, myEnemyClass.getCharacterStrength(), 2);
                                myArcherClass.performAttack(myEnemyClass, myEnemyClass.getCharacterStrength());
                                myArcherClass.printStatus();
                                myEnemyClass.printStatus();
                            }
                            if(myArcherClass.getCharacterHealth() <= 0)
                            {
                                cout << "YOU DIED!\n\n";
                                break;
                            }
                            if(myEnemyClass.getCharacterHealth() <= 0)      
                            {
                                cout << myEnemyClass.getCharacterName() << " HAS DIED!\n\n";
                                break;
                            }
                        }   
                    }
                    

                    cout << "\n\nTO BE CONTINUED . . .\n\n";

                    gameOver();
                }
                else if (userInput.at(0) == 'l' || userInput.at(0) == 'L') {
                    doggoPetting(i);
                    ++i;
                    cout << "To your right, the footprints continue. To your left, DOGGO.\n\n RIGHT OR LEFT: ";
                }
                else {
                    cout << "To your right, the footprints continue. To your left, DOGGO.\n\n RIGHT OR LEFT: ";
                }
            }
        }
        else {
            cout << "\nTo your left, a forest inhabitated by skeleton-like pine trees, footsteps can be seen in the snow, heading in that direction.\n\n RIGHT or LEFT: ";
        }
    }

    cout << "\nThanks for playing my game!\n";

    return 0;
}

// DEFINITIONS:

void gameOver() {
    string tryAgain = "";

    cout << "\nGAME OVER\n\n";
    cout << "Would you like to play again?\n\nYES/NO: ";
    cin >> tryAgain;
    if (tryAgain.at(0) == 'y' || tryAgain.at(0) == 'Y') {
        cout << endl;
        main();
    }
    else {
        cout << "\n\nThanks for playing my game!\n\n";
        exit(0);
    }
}

void doggoPetting(int i) {
    if (i == 0) {
        cout << "You look at DOGGO and give him a nice friendly pat on the head.\n\n DOGGO HAS BEEN PET.\n\n";
    }
    else if (i == 1) {
        cout << "You look at DOGGO again and give him a nice friendly pat on the head.\n\n DOGGO HAS BEEN PET.\n\n";
    }
    else if (i == 2) {
        cout << "You look at DOGGO once more and reach out to give him a nice friendly pat on the head. He avoids your hand. DOGGO no longer requires anymore pets.\n\n";
    }
    else {
        cout << "DOGGO desires no more pets.\n\n";
    }
}