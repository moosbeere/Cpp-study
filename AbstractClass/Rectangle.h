#pragma once
#include "Abstract.h"
class Rectangle :
    public Abstract
{
private:
    int a;
    int b;
public:
    bool flag;
    Rectangle(int a, int b);
    int getA() {
        return a;
    }
    int getB() {
        return b;
    }
    virtual int square(int a, int b) override;
};

