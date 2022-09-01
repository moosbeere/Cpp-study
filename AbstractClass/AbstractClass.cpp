// AbstractClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Rectangle.h"
#include "Abstract.h"
#include "Template.h"

int main()
{
    Rectangle rect(10, 2);
    rect.print(rect.square(rect.getA(), rect.getB()));
    rect.print(rect.square(rect.getA(), rect.getB()));
    Template<int> temp(2, 3);
    std::cout << (temp.getA() + temp.getB()) << "\n";
    temp.setA(3);
    std::cout << (temp.getA() + temp.getB()) << "\n";

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
