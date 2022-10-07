#include "Monster.h"


Monster::Monster(string name, int health, int damage, float maxHealth) : name(name), health(health), damage(damage), maxHealth(maxHealth) {}

int Monster::getLevel() {
    return maxHealth / 5;
}
void Monster::applyDamage(int damage) {
    health -= damage;
}

void Monster::applyDamage() {
    applyDamage(1);
}
void Monster::recovery() {
    health = maxHealth;
}

void Monster::attack(Monster* m) {
    m->health = m->health - damage;
}
