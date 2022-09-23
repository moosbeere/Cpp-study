// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;



/*Function
void print(string str = "World") {
	cout << "Hello " << str;
}
void print(int i) {
	cout << i << "\n";
}

int sum(int a, int b, bool isPrint = false);
*/
/*function and references
int i = 10;

int mult2(int& x) {
	return x *= 2;
}

void divWithRemainder(int& a, int& b) {
	int div = a / b;
	int rem = a % b;
	a = div;
	b = rem;
}
*/
/*static variables
void test() {
	static int x = 0;
	x++;
	cout << x<<"\n";
}
*/
/*macros
#define PI 3.14f;
#define CIRCLE_AREA(r) r*r*PI; //a+b*a+b*PI
#define CIRCLE_AREA2(r) (r)*(r)*PI; //(a+b)*(a+b)*PI
#define RECTANGLE_AREA(a,b) a = a*b;


float circleArea(int r)
{
	return r * r * PI;
}

bool TMin(int a, int b) {
	return a < b;
}

bool TMax(int a, int b) {
	return a > b;
}

#define CALL(t, a, b) T##t##(a, b);
*/
#include "MySpace.h"
#include "Header.h"
using namespace MySpace;
double MySpace::x = 25;

int main()
{
	cout << sum(2, 3)<<"\n";
	cout << MySpace::div(2, 3) << "\n";
	cout << sub(2, 3) << "\n";
	cout << mult(2, 3) << "\n";
	x = 15;
	test();
	cin.get();

	/*Macros
	cout<<CALL(Min, 4, 5);
	cout << "\n______\n";
	cout << CALL(Max, 4, 5);
	cout << "\n______\n";
	int a = 4;
	int b = 5;
	//cout << CIRCLE_AREA(2);
	circleArea(2);
	cout << CIRCLE_AREA(a + b);
	cout << "\n";
	cout << CIRCLE_AREA2(a+b);
	cout << "\n";
	RECTANGLE_AREA(a, b);
	cout << a;
	cout << "\n";
	#define PRT(s) cout<<s;
	PRT("hello");
	*/
	/* static variables
	test();
	test();
	test();
	*/
	/*function and references
	int x = 2;
	cout << mult2(x) << "\n";
	cout << mult2(x) << "\n";
	cout << mult2(x) << "\n";

	int a = 7;
	int b = 5;
	divWithRemainder(a, b);
	cout << a << "\n";
	cout << b << "\n";
	*/

	/*function
	print(4);
	int z = sum(4, 5);
	cout << z;
	*/
	/* Referens
	int x = 10;
	int& z = x;
	z = 15;
	cout << "x = " << x;
	*/
	// mult arrays
	/*int array[][2] = {{1,2}, {3, 4}, {5, 6}};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "---------\n";
	array[0][1] = 10;
	for (auto& arr : array) {
		for (int i : arr) {
			cout << i << " ";
		}
		cout << "\n";

	}*/
}
/*function
int sum(int a, int b, bool isPrint) {
	if (isPrint) {
		print(a + b);
		return (a + b);
	}
	return (a + b);
}
*/




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
