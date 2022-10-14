#include <iostream>
#include "Fight.h"
#include "Monsters.h"

void Fight::monsterFight(Monster myMonster, Monster computerMonster) {
    //Please refer to flowchart

// FIRST ROUND
    int round = 0;
    //1.We check Speed
    if (Monster::speedChecker(myMonster, computerMonster)) {
        std::cout << "Your monster is attacking first" << std::endl;
        //Monster::monsterAttack(myMonster, defenderMonster);
        myMonster.monsterAttack(myMonster, computerMonster);


    } else {
        std::cout << "Enemy monster is attacking first" << std::endl;
        computerMonster.monsterAttack(computerMonster, myMonster);

    }
    round++;

//LOOPING TILL SOMEONE IS DEAD
    while (!myMonster.isDead() && !computerMonster.isDead() ){

        if (round % 2 == 0)
        {
            Monster::monsterAttack(computerMonster, myMonster);
            std::cout << "My monster HP : " << myMonster.getHealthPoints() << std::endl;
            if (myMonster.isDead()) {
                std::cout << "My monster is dead" << std::endl;
                std::cout << "Round ended ! "<< round << std::endl;
                break;
            }

        } else {

            Monster::monsterAttack(myMonster, computerMonster);
            std::cout << "Computer monster HP : " << computerMonster.getHealthPoints() << std::endl;
            if ( computerMonster.isDead()) {
                std::cout << "Computer monster is dead" << std::endl;
                std::cout << "Round ended ! "<< round << std::endl;
                break;
            }
        }
        round++;
        std::cout << "Current Round "<< round << std::endl;
    }
}





