// Pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
void separator() {
    cout << "\n--------------\n";
}

int main()
{
    const float PI = 3.14;
    const float G = 9.8;

    const float* pointer = &PI;
    cout << " pointer PI = " << pointer << "\n";
    cout << " *pointer PI = " << *pointer<<"\n";
    //*pointer = 2.14;ошибка
    pointer = &G;
    cout << " pointer G = " << pointer << "\n";
    cout << " *pointer G = " << *pointer << "\n";

    int a = 25;
    int* const pntr = &a;
    cout << "a = " << a << "\n";
    *pntr = 30;
    cout << "a = " << a << "\n";

    const float* const pointer2 = &PI;
    //pointer2 = &G;ошибка
    //*pointer = a;ошибка

    



    /*int array[] = {1,4,5,6};
    cout << array << "\n";
    cout << *array << "\n";
    separator();
    for (int i = 0; i < 4; i++) {
        cout << *(array + i) << " ";
    }
    separator();
    for (int* p = array; p <= &array[3]; p++) {
        cout << *p << " ";
    }
    separator();
    int mArray[][2] = { {1,2}, {3, 4}, {5, 6} };
    //cout << mArray << "\n";
    int rows = sizeof(mArray) / sizeof(mArray[0]);
    int col = sizeof(mArray[0]) / sizeof(mArray[0][0]);
    int *end = mArray[0] + rows * col - 1;
    for (int* p = mArray[0], i = 1; p <= end; p++, i++) {
        cout << *p << " ";
        if (i % 2 == 0) cout << "\n";
    }

    separator();
    char arrayChars[] = "My string";
    cout << arrayChars << "\n";
    cout << (void*)arrayChars<<"\n"; 




   /* int a = 25;
    int* pointer = &a;
    cout << "pointer = " << pointer<<"\n";
    cout << "*pointer = " << *pointer << "\n";

    pointer++;
    cout << "pointer = " << pointer << "\n";
    cout << "*pointer = " << *pointer << "\n";
    pointer--;
    *pointer = 30;
    cout << "a = " << a << "\n";

    int mult2 = *pointer * 2;
    cout << "mult2 = " << mult2 << "\n";


    float f = 3.24;
    float* pointerF = &f;
    cout << "pointerF = " << pointerF << "\n";
    cout << "*pointerF = " << *pointerF << "\n";*/
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
