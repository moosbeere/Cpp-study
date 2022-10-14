#include "Monster.h"

    /*Monster::Monster() {
        name = "Spider";
        health = 20;
        damage = 15;
    }*/


Monster::Monster(string name, int health, int damage, int maxHealth) : name(name), health(health), damage(damage), maxHealth(maxHealth) {}   
Monster::Monster() : Monster("Spider", 20, 15, 50) {}
    Monster::~Monster() {
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
