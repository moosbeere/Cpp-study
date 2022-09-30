// Pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;

void separator() {
    cout << "\n---------------\n";
}

/*void printArray(int array[], int length) {
    cout << *array<<"\n";
    separator();
    /*int length = sizeof(array) / sizeof(array[0]);
    cout << length<<"\n";
    cout << sizeof(array) << "\n";
    cout << sizeof(array[0]) << "\n";
    for (int i = 0; i < length; i++) {
        cout << *(array + i) << " ";
    }
    //for (auto a:array)ошибка
}*/

void printArray(int* begin, int* end) {
    for (int* p = begin; p < end; p++) {
        cout << *p<<" ";
    }
}

int main()

{
    int array[] = { 1, 3, 5, 7 };
    int length = sizeof(array) / sizeof(array[0]);
    // printArray(array, length);
    printArray(array, length);

    /* int* pointer;
     int a = 25;
     pointer = &a;
     cout << "pointer = " << pointer << "\n";
     cout << "*pointer = " << *pointer << "\n";
     pointer++;
     cout << "pointer = " << pointer << "\n";
     cout << "*pointer = " << *pointer << "\n";
     pointer--;
     *pointer = 30;
     cout << "a = " << a << "\n";
     cout << "pointer = " << pointer << "\n";
     cout << "*pointer = " << *pointer << "\n";
     int mult2 = *pointer * 2;
     cout << "mult2 = " << mult2 << "\n";
     float f = 15.5;
     float* pointerF = &f;
     cout << "*pointerF = " << *pointerF << "\n";

    int array[] = { 1, 3, 5, 7 };
    cout << "*array = " << *array << "\n";
    for (int i = 0; i < 4; i++) {
        cout << *(array + i) << " ";
    }
    separator();
    for (int* pntr = array; pntr <= &array[3]; pntr++) {
        cout << *pntr << " ";
    }
    separator();
    int mArray[][2] = { {1,3}, {4, 5}, {7, 8} };
    int rows = sizeof(mArray) / sizeof(mArray[0]);
    int col = sizeof(mArray[0]) / sizeof(mArray[0][0]);
    int* end = mArray[0] + rows * col - 1;
    for (int* pntr = mArray[0], i=1; pntr <= end; pntr++, i++) {
        cout << *pntr << " ";
        if (i % 2 == 0) cout << "\n";
    }
    separator();
    char cArray[] = "My string";
    cout << cArray<<"\n";
    char* pchars = cArray;
    cout << (void*)pchars;*/

    /*const float PI = 3.14;
    const float G = 9.8;
    //можно изменить адрес
    const float* pointer = &PI;
    cout << "pointer PI = "<< pointer << "\n";
    pointer = &G;
    cout << "pointer G = " << pointer << "\n";
    cout << "*pointer = " << *pointer << "\n";

    //можно изменить значение
    float f = 1.2;
    float* const pointerF = &f;
    cout << "pointerF = " << pointerF << "\n";
    cout << "*pointerF = " << *pointerF << "\n";
    cout << "f = " << f << "\n";
   
    //pointerF = &G; ошибка
    *pointerF = 10.14;
    cout << "pointerF  = " << pointerF << "\n";
    cout << "*pointerF = " << *pointerF << "\n";
    cout << "f = " << f << "\n";

    //изменения невозможны
    const float* const pntr = &PI;
    //pntr = &G;ошибка
    //*pntr = G;ошибка*/


    


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
