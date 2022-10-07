// Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Monster1 {
public:
    string name;
    int health;
    int damage;
    float maxHealth;
    //int* i = new int(5);

    Monster() {
        name = "Spider";
        health = 40;
        damage = 3;
    }

    /*Monster(string name, int health, int damage) {
        this->name = name;
        this->health = health;
        this->damage = damage;
    }*/

    Monster(string name, int health, int damage, float maxHealth) : name(name), health(health), damage(damage), maxHealth(maxHealth) {}

    //Monster() : Monster(name, health, damage) {};

    ~Monster() {
       // cout << this->name << " delete!" << endl;
        //delete i;
    }

    int getLevel() {
        return maxHealth / 5;
    }
    void applyDamage(int damage) {
        health -= damage;
    }

    void applyDamage() {
        applyDamage(1);
    }
    void recovery() {
        health = maxHealth;
    }

    void attack(Monster* m) {
        m->health = m->health - damage;
    }
};

int main()
{
    //Second Task
    Monster goblin("Goblin", 20, 3, 50);
    Monster spider("Spider", 10, 3, 10);
    cout << goblin.getLevel() << endl;
    cout << spider.getLevel() << endl;

    goblin.applyDamage(10);
    spider.applyDamage(10);

    cout << goblin.name << " " << goblin.health << endl;
    cout << spider.name << " " << spider.health << endl;

    goblin.applyDamage();
    cout << goblin.name << " " << goblin.health << endl;

    spider.recovery();
    cout << spider.name << " " << spider.health << endl;

    goblin.attack(&spider);
    cout << spider.name << " " << spider.health << endl;



    /*First Task
    Monster goblin;
    goblin.name = "Goblin";
    goblin.health = 20;
    goblin.damage = 3;
    cout << goblin.name << " " << goblin.health << " " << goblin.damage << endl;
    Monster spider;
    cout << spider.name << " " << spider.health << " " << spider.damage << endl;

    Monster spider2 = Monster("Spider2", 20, 4);//Monster spider2("Spider2", 20, 4)
    cout << spider2.name << " " << spider2.health << " " << spider2.damage << endl;

    /*Monster* pspider = &spider;
    pspider->name = "Goblin";
    cout << spider.name << " " << spider.health << " " << spider.damage << endl;

    if (true) {
        Monster* newpointer = new Monster("NewMonster", 12, 8);
        cout << newpointer->name << " " << newpointer->health << " " << newpointer->damage << endl;
        delete newpointer;
    }


    /*Monster& test = goblin;
    cout << test.name << " " << test.health << " " << test.damage << endl;
    test.name = "NewName";
    cout << test.name << " " << test.health << " " << test.damage << endl;
    cout << goblin.name << " " << goblin.health << " " << goblin.damage << endl;*/

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
