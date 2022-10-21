#include "FlyMonster.h"

FlyMonster FlyMonster::operator+(FlyMonster& m)
{
	return FlyMonster(this->name, this->getHealth() + m.getHealth(), 10, 10, this->getFlySpeed()+m.getFlySpeed());
}

FlyMonster::FlyMonster(string name, int health, int damage, float maxHealth, float flySpeed) :
	Monster(name, health, damage, maxHealth)
{
	this->flySpeed = flySpeed;
}

FlyMonster::FlyMonster() :FlyMonster("Dragon", 10, 3, 40, 40){

}

float FlyMonster::getFlySpeed()
{
	return this->flySpeed;
}

void FlyMonster::fly()
{
	setHealth(getHealth() - 1);
	cout << name << " is flying" << endl;
}

void FlyMonster::print()
{
	Monster::print();
	cout << flySpeed<<endl;
}

void FlyMonster::attack(Monster* m)
{
	m->applyDamage(this->getDamage());
}

