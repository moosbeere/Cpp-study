#pragma once
#include <iostream>
using namespace std;

class Monster{
    friend class AIMonster;
private:
    int health;
    int damage;
    float maxHealth;

protected:
    string name;
    void printWarning(string msg);
public:
    virtual void print(){ //final{
        cout << name << endl;
        cout << health << endl;
        cout << damage << endl;
        cout << maxHealth << endl;
    }
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

