// HelloWorld_two.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	bool b1 = true;
	bool b2 = false;
	std::cout << "!b1 = " << !b1 << "\n";//���������
	std::cout << "b1 && b2 = " << (b1 && b2) << "\n";//���������� "�"
	std::cout << "b1 || b2 = " << (b1 || b2) << "\n";//���������� "���"
	std::cout << "b1 && b2 || b1 = " << (b1 && b2 || b1) << "\n";

	int x = 5;
	int y = 7;
	std::cout << "x < y = " << (x < y) << "\n";

	bool b3 = (x > y + 15) && (true && !(15 < 7));
	std::cout << "b3 = " << b3 << "\n";
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