// cin if switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "");
    std::cout << "������� ������ ����� ";
    int x;
    std::cin >> x;
    std::cout << "������� ������ ����� ";
    int y;
    std::cin >> y;
    std::cout << "������� ���� �������� ";
   // std::string mat;
    int mat;
    std::cin >> mat;
    /*if (mat == "*") std::cout << (x * y);
    else if (mat == "/") std::cout << (float)(x / y);
    else if (mat == "+") std::cout << (x + y);
    else if (mat == "-") std::cout << (x - y);*/
    switch (mat)
    {
        case '*': 
            std::cout << (x * y);
            break;
    }

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
