#include "Monster.h"


void Monster::printWarning(string msg)
{
    cout << "Warning: " << msg << endl;
}

Monster::Monster(string name, int health, int damage, float maxHealth) : name(name), health(health), damage(damage), maxHealth(maxHealth) {
    counter++;
}

Monster::Monster() : Monster("Spider", 20, 3, 50) {}

int Monster::getHealth()
{
        return this->health;
}

void Monster::setHealth(int health)
{
    if (health < 0) printWarning("Вы ввели отрицательное значение");
    else if (health > maxHealth) this->health = maxHealth;
    else this->health = health;
}

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
