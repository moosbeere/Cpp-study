// Pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
void separator() {
    cout << "\n--------------\n";
}

void printArray(int array[], int length) {
    cout << *array<<"\n";
    //int length = sizeof(array) / sizeof(array[0]);
    cout << "length = "<< length << "\n";
    for (int i = 0; i < length; i++) {
        cout << *(array + i) << " ";
    }
}

void printArray(int* begin, int* end) {
    for (int* p = begin; p < end; p++) cout << *p << " ";
}

const int cols = 2;
void printArray2(int (*array)[cols], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
}

void test(int* array[]) {
    *array[3] = 10;
}

void function1() {
    cout << "function 1"<<"\n";
}

void function2() {
    cout << "function 2" << "\n";
}

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

int getMaxOrMin(int array[], int length, bool (*compare)(int, int)) {
    int max = array[0];
    for (int i = 0; i < length; i++) {
        if (compare(array[i], max)) max = array[i];
    }
    return max;
}

bool max(int a, int b) {
    return a > b ? true : false;
}

bool min(int a, int b) {
    return a < b ? true : false;
}



void numberPositive() {
    cout << " + ";
}
void numberNegative() {
    cout << " - ";
}

void (*function(int x))() {
    if (x > 0) return numberPositive;
    else return numberNegative;
}

int* test() {
    int* i = new int(3);// утечка памяти при вызове функции, если внутри функции не освободить память
    return new int(5);
}

int main()
{
    int* pc1 = new int(7);
    cout << *pc1 << "\n";
    delete pc1;

    int* pntr = test();
    cout << pntr << "\n";
    delete pntr;


    int* array = new int[3] {1, 2, 4};
    for (int* i = array; i < array + 3; i++) {
        cout << *i << " ";
    }
    delete[] array; 
    
    /*void (*test)() = function(-5);
    test();



    /*int array[] = {18, 12, 1, 7, 10};
    cout << "max = " << getMaxOrMin(array, 5, max);
    separator();
    cout << "min = " << getMaxOrMin(array, 5, min);

    /*float (*operation)(float, float);
    operation = add;
    cout << operation(1.2, 3.4)<<"\n";
    operation = sub;    
    cout << operation(5, 3.4);

    /*void (*pf)();
    pf = function1;
    pf();
    void(*pfs[])() { function1, function2 };
    pf = function1;
    pfs[0]();
    pfs[1]();

    /*
    int array[][2] = {{1,2}, {3, 4}, {5, 6}};
    printArray2(array, 3);

    int arr[] = { 1,2,3,4 };

    

    /*int array[] = {1,4,5,6};
    int length = sizeof(array) / sizeof(*array);
    printArray(array, length);
    separator();
    printArray(array, &array[length]);
    separator();
   // cout << std::end(array)<<"\n";
    printArray(std::begin(array), std::end(array));

   /* const float PI = 3.14;
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
