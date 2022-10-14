// Enum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Move.h"

struct Item {
    string name;
    string description;
    float price = 0;
    void print() {
        cout << "Name: " << name << endl;
        cout << "Description: " << description << endl;
        cout << "Price: " << price << endl;
    }
};

void printStruct(Item& item) {
    cout << "Name: " << item.name << endl;
    cout << "Description: " << item.description << endl;
    cout << "Price: " << item.price << endl;
}

int main()
{
    Item item1;
    item1.name = "Struct";
    item1.description = "First struct";
    printStruct(item1);

    Item item2 = { "Item2", "item2", 10 };
    printStruct(item2);
    item2.print();


    /*
    setlocale(LC_ALL, "");
    Move::move(Direction::EAST);
    */
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
