#pragma once
#include <iostream>
using namespace std;

class Monster
{
    friend void test(Monster& m);
    friend class AIMonster;

    int health;
    int damage;
    int maxHealth;
protected:
    string name;
    void printWarning(string msg);
public:
    Monster();
    Monster(string name, int health, int damage, int maxHealth);

    ~Monster();

    int getHealth();
    void setHealth(int health);

    int getLevel();

    void applyDamage(int damage);

    void applyDamage();

    void recovery();

    void attack(Monster* m);
};

