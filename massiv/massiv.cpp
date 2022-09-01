// massiv.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int func1(int x = 1) {
    if (x <= 0) return 0;
    else {
        int sum = 0;
        for (int i = 0; i <= x; i++) sum += i;
        return sum;
    }
}

int four(int x, int y, int& z, int& o) {
    z = x + y;
    o = x * y;
    return o;
}

int main()
{
    int x = 1;
    int y = 2;
    std::cout << four(2, 2, x, y);
    /*int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << func1();
    */
    /*int sum = 0;
    int array[2][3] = { {1,2,3},{4,5,6} };
    for (auto& arr : array) {
        for (int y : arr) {
            std::cout << y << " ";
            sum += y;
        }
    }
    std::cout << sum << "\n";*/
   /* int array[2][3] = {{1,2,3},{4,5,6}};
    int arr[3];
    for (int j = 0; j < 3; j++) {
        arr[j] = array[0][j] + array[1][j];
    }
    for (int& a : arr) {
        std::cout << a<< " ";
    }*/

    /*float f = 20.84;
    float& x = f;
    float& y = f;
    y = 20.20;
    std::cout << y << " " << f << " ";*/

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
