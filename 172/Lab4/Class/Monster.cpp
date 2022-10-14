#include "Monster.h"

    /*Monster::Monster() {
        name = "Spider";
        health = 20;
        damage = 15;
    }*/


Monster::Monster(string name, int health, int damage, int maxHealth) : name(name), health(health), damage(damage), maxHealth(maxHealth) {
    counter++;
}   
void Monster::printWarning(string msg)
{
    cout << msg << endl;
}
void Monster::resetCounter()
{
        counter = 0;
}
void Monster::print()
{
    cout << name << " " << health << " " << damage <<" "<< maxHealth << endl;
}
Monster::Monster() : Monster("Spider", 20, 15, 50) {}
    Monster::~Monster() {
    }

    int Monster::getHealth()
    {
        return this->health;
    }

    void Monster::setHealth(int health)
    {
        if (health > this->maxHealth) this->health = maxHealth;
        else if (health < 0) printWarning("Вы ввели отрицательное число!");
        else this->health = health;
    }

    int Monster::getLevel() {
        return maxHealth / 5;
    }

    void Monster::applyDamage(int damage) {
        health -= damage;
    }

    void Monster::applyDamage() {
        applyDamage(5);
    }

    void Monster::recovery() {
        health = maxHealth;
    }

    void Monster::attack(Monster* m) {
        m->health = m->health - damage;
    }

    /*void test(Monster& m)
    {
        cout << m.name << endl;
        cout << m.health << endl;
    }
    */