// Enum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Move.h"
using namespace std;

struct Item {
    string name;
    string description;
    int price = 0;
    void print() {
        cout << name << " " << description << " " << price << endl;
    }
};

void print(Item& i) {
    cout << i.name << " " << i.description << " " << i.price << endl;
}

int main()
{
    Item i;
    Item i2 = { "description", "T-short" , 20 };
    cout << i2.name << endl;
    i2.print();
    print(i);

    i.name = "Short";
    i.description = "enough description";
    i.price = 20;
    cout << i.name<<endl;
    setlocale(LC_ALL, "");
    Move::move(Direction::EAST);
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
