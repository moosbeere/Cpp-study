#pragma once
#include "Monster.h"
class CrawlingMonster :
    public Monster
{
public:
    void attack(Monster& m) override;
};

