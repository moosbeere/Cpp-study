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

public:
    Monster();
    Monster(string name, int health, int damage, int maxHealth);

    ~Monster();
    static int counter;
    static void resetCounter();
    virtual void print(); //final;

    int getHealth();
    

    int getLevel();

    void applyDamage(int damage);

    void applyDamage();

    void recovery();

    void attack(Monster* m);
protected:
    string name;
    void printWarning(string msg);
    void setHealth(int health);
};

