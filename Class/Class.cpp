// Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Clothes_New.h"
#include "Characteristic.h"
#include "Enum.cpp"
#include "Description.h"
using std::string;

int main()
{
    setlocale(LC_ALL, "");
    /*Clothes_New shirt = Clothes_New();
    std::cout << shirt.getName() << " " << shirt.getCount() << " " << shirt.getSize() << "\n";
    Clothes_New skirt = Clothes_New("skirt", 3, 42, Color::BLACK);
    std::cout << skirt.getName() << " " << skirt.getCount() << " " << skirt.getSize() << "\n";
    Clothes_New shorts("Шорты", 2, 42, Color::BLUE);
    std::cout << shorts.getName() << " " << shorts.getCount() << " " << shorts.getSize() << "\n";
    Clothes_New* socks = new Clothes_New("Носки", 10, 36, Color::GREEN);
    std::cout << socks->getName() << " " << socks->getCount() << " " << socks->getSize() << "\n";
    delete socks;

    std::cout<<"Максимальное количество "<<shirt.getName() << shirt.getCount() << "\n";
   // std::cout << "Sum " << shirt.sum(skirt)<<"\n";
   // std::cout<<"Sum 2 "<<shirt.sum(skirt.count) << "\n";
    shirt.setCount(3);
    std::cout << "Count " << shirt.getCount()<<"\n";

    std::cout << "---------------\n";
    Characteristic blue("blue");
    std::cout<<shirt.getName()<<" "<<blue.color<<" is color = "<< blue.colorCount(&shirt)<<"\n";
    std::cout << shirt.getColor() << "\n";*/

    /*User user;
    user.id = 1;
    user.login = "olga";
    user.password = 12345;
    user.inConsol();*/

    /*
    Description desc = Description();
    std::cout << desc.getName() << " " << desc.getColor() << " " << desc.getDescription() << "\n";*/
    /*
    Clothes_New clothes("heart", 3, 42, Color::GREEN);
    std::cout << (string)clothes<<"\n";
    std::cout << clothes.getText() << "\n";
    Description desc = Description();
    std::cout << desc.getText()<<"\n";
    */

    Clothes_New m1("m1", 10, 42, Color::BLACK);
    Clothes_New m2("m2", 3, 42, Color::BLACK);
    std::cout << (m1 < m2) << "\n";
    std::cout << (m1 > m2) << "\n";
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
