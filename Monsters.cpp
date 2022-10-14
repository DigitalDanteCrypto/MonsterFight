
#include <iostream>
#include "Monsters.h"

Monster::Monster(float healthPoints, float attackDamage, float defencePoints, float speed, std::string userRace, Race givenRace) {
    _healthPoints = healthPoints;
    _attackDamage = attackDamage;
    _defencePoints = defencePoints;
    _speed = speed;
    _userRace = userRace;
    _race = givenRace;


}
//Monsters Setups
Monster Monster::orcSetup() {
    Monster orcMonster(300, 100, 140, 3, "orcMonsterPilgrim", Race::ORC);
    return orcMonster;
}

Monster Monster::trollSetup() {
    Monster trollMonster(500, 200, 200, 2, "trollMonsterGIGAMUTANT", Race::TROLL);
    return trollMonster;
}

Monster Monster::goblinSetup() {
    Monster goblinMonster(100, 400, 200, 4, "goblinOfTheForest", Race::GOBLIN);
    return goblinMonster;
}



//Get Values Functions:
float Monster::getHealthPoints() {
    return _healthPoints;
}

float Monster::getAttackDamage() {
    return _attackDamage;
}

float Monster::getDefencePoints() {
    return _defencePoints;
}

float Monster::getSpeed() {
    return _speed;
}

std::string Monster::getUserRace() {
    return _userRace;
}

std::string Monster::raceToString() {
    switch (_race) {
        case Race::ORC :
            return "Race is Orc";
        case Race::GOBLIN:
            return "Race is Goblin";
        case Race::TROLL:
            return "Race is Troll";
        case Race::USERRACE:
            return "Race is " + _userRace;
        default:
            return "An error occurred in RaceToString";
    }
}

std::string Monster::getRace() {
    std::string returnedRace = raceToString();
    return returnedRace;
}

Monster Monster::userCreateMonster() {

    float userHealthPoints;
    float userAttackDamage;
    float userDefencePoints;
    float userSpeed;
    std::string userRaceName;

    std::cout << "Welcome to the fight simulator " << std::endl;
    std::cout << "Please enter your monster stats" << std::endl;
    std::cout << "Let's start with Health Points, enter a value  : ..." << std::endl;
    std::cin >> userHealthPoints;
    std::cout << " Enter your attack damage : ..." << std::endl;
    std::cin >> userAttackDamage;
    std::cout << "Enter your Defence Points: ... " << std::endl;
    std::cin >> userDefencePoints;
    std::cout << "Enter your Speed (Value must be between 1-5): ... " << std::endl;
    std::cin >> userSpeed;
    std::cout << "Enter your Race Name : ... " << std::endl;
    std::cin >> userRaceName;
    std::cout << "                    Monster Stats:               " << std::endl;
    std::cout << "  Health : " << userHealthPoints << "   Attack : " << userAttackDamage <<  "   Defence :  " << userDefencePoints <<   " Speed : "  << userSpeed << std::endl;
    std::cout << "  Monster race : " << userRaceName << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;

    Monster userMonster(userHealthPoints, userAttackDamage, userDefencePoints, userSpeed, userRaceName, Race::USERRACE );

    return userMonster;

}

void Monster::setHealthPoints(float newHP) {
    _healthPoints = newHP;

}

void Monster::monsterAttack(Monster &attacker, Monster &defender)  {

    float damage = attacker.getAttackDamage() - defender.getDefencePoints();
    float healthPointsAfterDamage = defender.getHealthPoints() - damage;
    defender.setHealthPoints(healthPointsAfterDamage);


}


bool Monster::speedChecker(Monster attacker, Monster defender) {
    float defenderSpeed = defender.getSpeed();
    float attackerSpeed = attacker.getSpeed();

    if (attackerSpeed > defenderSpeed) {
        std::cout << "myMonster has greater speed value !" << std::endl;
        return true;
    } else {
        std::cout << "computerMonster has greater speed value !" << std::endl;
        return false;
    }

}

bool Monster::isDead() {

    if (_healthPoints <= 0) {
        return true;

    } else {
       return false;
    }
}








