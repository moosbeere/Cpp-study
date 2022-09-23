// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int i = 20;//глобальые переменные

//void hello(int i);//функции
//функции и ссылки
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

int main()
{   
    //функцции и ссылки
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
