#include "Rectangle.h"
#include <iostream>
Rectangle::Rectangle(int a, int b):a(a), b(b)
{
    flag = false;
}

int Rectangle::square(int a, int b)
{
    if (flag) {
        std::cout << "Square work";
        return 0;
    }
    else
    {
        std::cout << "Square don't work";
        flag = true;
        return a * b;
    }   
}
