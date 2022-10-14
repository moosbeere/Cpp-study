#pragma once
#include "Monster.h"
class FlyMonster final:
    public Monster
{
    float flySpeed;
public:
    FlyMonster operator + (FlyMonster& m);
    FlyMonster(string name, int health, int damage, float maxHealth, float flySpeed);
    FlyMonster();
    float getFlySpeed();
    void fly();
    void print() override;
};

