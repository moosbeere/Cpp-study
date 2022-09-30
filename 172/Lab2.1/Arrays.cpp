// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//using namespace std;
using std::cout;
using std::cin;
using std::endl;


//int i = 20;//глобальые переменные

//void hello(int i);//функции
/*функции и ссылки
int mult2(const int& x) {
    int mult = x * 2;
    return mult;
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
    cout << x << "\n";
}
*/
/*Macros
#define PI 3.14;
#define CIRCLE_AREA(r) r*r*PI;// 3+5*3+5*3.14
#define CIRCLE_AREA2(r) (r)*(r)*PI; //(3+5)*(3+5)*3.14
#define RECTANGLE_AREA(a,b) a = a*b;
#define CALL(t, a, b) T##t##(a,b);
bool TMin(int a, int b) {
    return a < b;
}
bool TMax(int a, int b) {
    return a > b;
}

float circleArea(float x) {
    return x * x * PI;
}
void separator() {
    cout << "\n--------\n";
}
*/
#include "MyMath.h"
#include "MySpace.h"
using namespace MySpace;
double MySpace::x = 26;

int main()
{   
    int a = 4;
    int b = 5;
    cout << sum(a, b) << endl;
    cout << sub(a, b) << endl;
    cout << MySpace::div(a, b) << endl;
    cout<<mult(a, b)<<endl;
    x = 34;
    test();
    cin.get();
   
    /*Macros
    cout << CALL(Min, 4, 5);
    separator();
    cout<<CALL(Max, 4, 5);
    separator();
    int a = 3;
    int b = 5;
    RECTANGLE_AREA(a, b);
    cout << a;
    separator();
    cout << CIRCLE_AREA(a + b);
    separator();
    cout << CIRCLE_AREA2(a+b);
    separator();
#define PRT(s) cout<<s<<"\n";
    PRT("hello");
    */
    //separator();
    //cout << circleArea(2);
    //cout << PI;
    /*static variables
    test();
    test();
    test();
    test();
    /*функцции и ссылки
    int x = 2;
    cout << mult2(x) << "\n";
    cout << mult2(x) << "\n";
    cout << mult2(x) << "\n";
    int a = 7;
    int b = 3;
    divWithRemainder(a, b);
    cout << "a = " << a<<"\n";
    cout << "b = " << b<<"\n";
    /*
    //функции
    hello(4);
    int z = sum(3,4, true);
    cout << z;
    
    //многомерные массивы
    int array[][2] = {{1,2},{3,4},{5,6}};
    std::cout<<array[0][1];
    std::cout << "\n";
    array[0][1] = 10;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "--------------\n";
    for (auto& arr : array) {
        for (int i : arr) {
            std::cout << i<<" ";
        }
        std::cout << "\n";
        }
    //ссылки
    int i = 10;
    int& b = i;
    cout << "b = " << b<<"\n";
    b = 45;
    cout << "i = " << i;
    */
}
/*Функции
int sum(int a, int b, bool isPrint = false) {
    if (isPrint) {
        hello(a + b);
        return (a + b);
    }
    return (a + b);
}

void hello(string str) {
    cout << "Hello, " << str << "!" << "\n";
}
void hello(int i) {
    cout << i << "\n";
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
