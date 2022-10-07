#pragma once
#include <iostream>
using namespace std;

class Monster
{
public:
    string name;
    int health;
    int damage;
    int maxHealth;
    
    Monster();
    Monster(string name, int health, int damage, int maxHealth);

    ~Monster();

    int getLevel();

    void applyDamage(int damage);

    void applyDamage();

    void recovery();

    void attack(Monster* m);
};

