// For_While_Do.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
   /* int x;
    do {
        std::cout << "Enter a positive integer ";
        std::cin >> x;
    } while (x < 0);*/
    /*int x;
    std::cout << "Enter a positive integer ";
    std::cin >> x;
    int sum = 0;
    for (int i = 1; i <= x; i++) sum += i;
    std::cout << sum;*/
    int numbers[10];
    int length = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < length; i++) {
        numbers[i] = i * 2;
        if (i !=0 && i%2 == 0) std::cout <<numbers[i] << " ";
    }
    std::cout << "-----------------\n";
    int sum = 0;
    for (int i = 0; i < length; i++) {
        if (i % 2 > 0) {
            std::cout << numbers[i] << " ";
            sum += numbers[i];
        }
    }
    std::cout << sum;

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
