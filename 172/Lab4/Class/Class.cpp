// Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Monster.h"
#include "AIMonster.h"
using namespace std;

void test(Monster& m) {
    cout << m.getHealth() << endl;
    cout << m.name << endl;
}

int Monster::counter = 0;

int main()
{
    setlocale(LC_ALL, "");

    //Task4
    Monster m1 = Monster();
    m1.setHealth(-10);
    cout << m1.getHealth() << endl;
    //m1.printWarning();ошибка доступа
    test(m1);

    AIMonster ai;
    ai.move(&m1);
    m1.setHealth(0);
    ai.move(&m1);

    Monster m2;
    Monster m3;
    Monster m4;
    cout << Monster::counter << endl;
    Monster::resetCounter();
    cout << Monster::counter << endl;



    /*//Task 2
    Monster goblin("Goblin", 20, 3, 50);
    cout<<goblin.getLevel()<<endl;
    goblin.applyDamage(10);
    cout << goblin.getHealth() << endl;
    goblin.applyDamage();
    cout << goblin.getHealth() << endl;
    goblin.recovery();
    cout << goblin.getHealth() << endl;

    Monster spider("Spider", 30, 5, 35);
    goblin.attack(&spider);
    cout << spider.getHealth() << endl;*/





    /*Task 1 
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
