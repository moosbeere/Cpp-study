#pragma once
template <typename T>
class Template 
{
private:
    T a;
    T b;
public:
    Template(T a, T b) :a(a), b(b) {};
    T getA() {
        return a;
    };
    T getB() {
        return b;
    };

    void setA(T a) {
        this->a = a;
    };
    void setB(T b) {
        this->b = b;
    };
};


