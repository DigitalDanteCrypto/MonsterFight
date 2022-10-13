#pragma once

#include <string>

enum class Race {
    ORC,
    TROLL,
    GOBLIN,
    USERRACE
};

class Monster {

private :
    float _healthPoints;
    float _attackDamage;
    float _defencePoints;
    float _speed;
    std::string _userRace;
    Race _race;

public:

    Monster(float, float, float, float, std::string, Race);

    //Create monsters:
    static Monster orcSetup();
    static Monster trollSetup();
    static Monster goblinSetup();


    //Create UserMonster:

    static Monster userCreateMonster();

// Get Monsters Values;
    float getHealthPoints();
    float getAttackDamage();
    float getDefencePoints();
    float getSpeed();
    std::string getUserRace();
    std::string getRace();

//Monster Attack Method:
static float monsterAttack(Monster&, Monster&);

void setHealthPoints(float);
//SpeedChecker TO determine who is attacking first

static bool speedChecker(Monster, Monster);

//Checking HealthPoints of Defender
bool isDead();

//Race to String
std::string raceToString();














};
