// Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Monster {
public:
    string name;
    int health;
    int damage;
    int* i = new int(5);

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

    Monster(string name, int health, int damage) : name(name), health(health), damage(damage) {}
    //Monster() : Monster(name, health, damage) {}

    ~Monster() {
        cout << this->name << " уничтожен!"<< endl;
        delete i;
    }

};

int main()
{
    setlocale(LC_ALL, "");
    Monster m;
    m.name = "Goblin";
    m.health = 10;
    m.damage = 2;

    cout << m.name << " " << m.health << " " << m.damage<<"\n";

    //Monster m2;
    //cout << m2.name << " " << m2.health << " " << m2.damage << "\n";

    Monster goblin2 = Monster("Goblin2",2,2);// аналогично Monster goblin2("Goblin2",2,2);
    cout << goblin2.name << " " << goblin2.health << " " << goblin2.damage << "\n";

    Monster* pm = &m;
    pm->name = "Spider";
    cout << m.name << " " << m.health << " " << m.damage << "\n";
    //cout << pm->name << " " << pm->health << " " << pm->damage << "\n";

    if (true) {
        Monster* spider = new Monster("SpiderP", 20, 5);
        cout << spider->name << " " << spider->health << " " << spider->damage << "\n";
        delete spider;
    }
    
   /* Monster test = goblin2;
    cout << "test  "<< test.name << " " << test.health << " " << test.damage << "\n";
    test.name = "testNew";
    cout << "goblin2 " << goblin2.name << " " << goblin2.health << " " << goblin2.damage << "\n";
    cout << "test  " << test.name << " " << test.health << " " << test.damage << "\n";*/
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
