// Math.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _USE_MATH_DEFINES
#include <iostream>
 
using namespace std;

int main()
{
	cout << std::min(3, 10) << "\n";
	cout << std::max(10, 3) << "\n";
	cout << sqrt(5) << endl;
	cout << round(15.7)<<endl;
	cout << round(15.5) << endl;
	cout << floor(15.7) << endl;
	cout << ceil(15.2) << endl;
	cout << trunc(15.2) << endl;
	cout << trunc(-5.4) << endl;
	cout << floor(-5.4) << endl;

	double d = 5.12392;
	double rd = trunc(d * 1000 + 0.5) / 1000;
	cout << rd << "\n";

	cout << M_PI << endl;


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
