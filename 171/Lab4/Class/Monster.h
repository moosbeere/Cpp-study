#pragma once
#include <iostream>
using namespace std;
class Monster{
public:
    string name;
    int health;
    int damage;
    float maxHealth;

    Monster(string name, int health, int damage, float maxHealth);

    int getLevel();

    void applyDamage(int damage);

    void applyDamage();

    void recovery();

    void attack(Monster* m);
};

