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
    int getDamage();
    string getName();

    void applyDamage(int damage);

    void applyDamage();

    void recovery();

    virtual void attack(Monster& m) = 0;
protected:
    string name;
    void printWarning(string msg);
    void setHealth(int health);
};

