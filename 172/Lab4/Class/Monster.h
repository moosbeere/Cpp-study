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
    
    Monster() {
        name = "Spider";
        health = 20;
        damage = 15;
    }
    /*Monster(string name, int health, int damage) {
        this->name = name;
        this->health = health;
        this->damage = damage;
    }*/

    Monster(string name, int health, int damage, int maxHealth) : name(name), health(health), damage(damage), maxHealth(maxHealth) {}
    //Monster() : Monster(name, health, damage) {}

    ~Monster() {
        // cout << this->name << " уничтожен!"<< endl;
         //delete i;
    }

    int getLevel() {
        return maxHealth / 5;
    }

    void applyDamage(int damage) {
        health -= damage;
    }

    void applyDamage() {
        applyDamage(5);
    }

    void recovery() {
        health = maxHealth;
    }

    void attack(Monster* m) {
        m->health = m->health - damage;
    }
};

