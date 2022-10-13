#include <iostream>
#include "Monsters.h"
#include "Fight.h"

int main() {
    Monster Orc = Monster::orcSetup();
    Monster Troll = Monster::trollSetup();
    Monster Goblin = Monster::goblinSetup();

    Monster userMonsterInput = Monster::userCreateMonster();

    Fight fightSimulator;

    int choice;

    std::cout << "WELCOME TO THE MONSTER FIGHT SIMULATOR" << std::endl;
    std::cout << "PLEASE CHOOSE YOUR OPPONENT" << std::endl;
    std::cout << "1. TO FIGHT A TROLL" << std::endl;
    std::cout << "2. TO FIGHT A ORC" << std::endl;
    std::cout << "3. TO FIGHT A GOBLIN" << std::endl;
    std::cin >> choice;

    switch (choice) {
        case 1:
            fightSimulator.monsterFight(userMonsterInput, Troll);
            break;
        case 2:
            fightSimulator.monsterFight(userMonsterInput, Orc);
            break;
        case 3:
            fightSimulator.monsterFight(userMonsterInput, Goblin);
            break;
        default:
            std::cout << " An error occured ";
    }








    return 0;
}
