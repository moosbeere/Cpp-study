#include "FlyMonster.h"

FlyMonster::FlyMonster(string name, int health, int damage, int maxHealth, int flySpeed):
    Monster(name, health, damage, maxHealth)
{
    this->flySpeed = flySpeed;
}

FlyMonster::FlyMonster() : FlyMonster("Dragon", 10, 3, 30, 40)
{
}

int FlyMonster::getFlySpeed()
{
    return this->flySpeed;
}

void FlyMonster::fly()
{
    this->setHealth(this->getHealth() - 1);
    cout << name << " is flying" << endl;
}

void FlyMonster::print()
{
    cout << "\n---------------\n";
    Monster::print();
    cout << flySpeed << endl;
    cout << "---------------\n";
}
