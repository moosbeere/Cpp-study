#pragma once
#include "Monster.h"

class FlyMonster final:
    public Monster
{
private:
    int flySpeed;
public:
    FlyMonster(string name, int health, int damage, int maxHealth, int flySpeed);
    FlyMonster();
    int getFlySpeed();
    void fly();
    void print() override;
};

