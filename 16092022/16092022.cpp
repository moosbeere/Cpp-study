// 16092022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <array>
using namespace std;

int main()
{
	//—читывание с консоли строки
	setlocale(LC_ALL, "");
	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string name;
	cout << "¬ведите им€: ";
	cin >> name;
	cout << "ѕривет, " << name;*/
	// ------- не€вное приведение типов
	/*int x;
	cout << "Enter x: ";
	cin >> x;
	int y;
	cout << "Enter x: ";
	cin >> y;
	int sum = x + y;
	cout << "sum = " << sum;*/

	//условный оператор
	/*int x = 0;
	if (x)
	{
		cout << (x != 3);
	}*/
	//ќператор выбора
	/*int a;
	cout << "Enter a: ";
	cin >> a;
	switch (a) {
	case 1: cout << "пользователь ввел 1";
		break;
	case 2: cout << "пользователь ввел 2";
		break;
	default: cout << "¬вел что-то другое";
	}*/

	//работа с массивами
	//int array[6];
	//array[0] = 3;
	//создание массива с ипользованием примитивных типов данных
	/*int array[] = {1,3,4,5,6,7};
	cout << sizeof(array) << endl;
	int length = sizeof(array) / sizeof(array[0]);
	//cout << length;
	for (int i = 0; i < length; i++)
	{
		cout << array[i]<<endl;
	}*/
	//создание массива с ипользованием составных типов данных

	array<int, 5> arr{ 1,2,3,4,5 };
	//cout << arr.size()<< endl;
	for (auto a : arr) {
	//	cout << a<<endl; 
	}
	//цикл с предусловием
	int x = 3;
	while (x < 5)
	{
		if (x == 3) {
			x++; 
			continue;
		}
		cout << x << endl;
		x++;
	}
	//цикл с постусловием

	do
	{
		cout << "enter";
	} while (x < 4);
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
