// FunctionAndArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int sum(int* begin, int* end) {
    int sum =0;
    std::cout << *begin << "\n";
    std::cout << *end << "\n";
    for (begin; begin <= end; begin++) {
        sum += *begin;
    }
    return sum;
}

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int (*function(char s))(int, int) {
    if (s == '+') return add;
    else return sub;
}
int main()
{
    /*int array[] = {1,2,3,4,5};
    int* end = &array[4];
    std::cout << sum(array, end);*/

    std::cout<<function('-')(3, 3);
    float *f = new float(2.2);
    std::cout << *f;
    delete f;

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
