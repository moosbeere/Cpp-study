#pragma once
#include <iostream>
using namespace std;

class Monster{
    friend class AIMonster;
private:
    string name;
    int health;
    int damage;
    float maxHealth;

protected:
    void printWarning(string msg);
public:
    static void resetCounter() {
        counter = 0;
    }
    static int counter;
    friend void test(Monster& m);
    Monster(string name, int health, int damage, float maxHealth);
    Monster();

    int getHealth();
    void setHealth(int health);

    int getLevel();

    void applyDamage(int damage);

    void applyDamage();

    void recovery();

    void attack(Monster* m);
};

