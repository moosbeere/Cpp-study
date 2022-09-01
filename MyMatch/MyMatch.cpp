#include "MyMatch.h"
int MyMatch::add(int a, int b)
{
    count++;
    return a + b;
}

int MyMatch::sub(int a, int b)
{
    count++;
    return a - b;
}

int MyMatch::mult(int a, int b)
{
    count++;
    return a * b;
}

int MyMatch::div(int a, int b)
{
    count++;
    return a / b;
}
