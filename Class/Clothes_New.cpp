#include "Clothes_New.h"
#include "Enum.cpp"
#include <string>



Clothes_New::Clothes_New(string name, int count, int size, Color color)
{
    this->name = name;
    this->count = count;
    this->size = size;
    this->enumColor = color;
}


Clothes_New::Clothes_New() : Clothes_New("test", 2, 2, Color::BLUE) {}
Clothes_New::~Clothes_New()
{
    std::cout << "Объект " << this->name << " удален" << "\n";
}

string Clothes_New::getName() {
    return name;
}
int Clothes_New::getCount(){
    return count;
}
int Clothes_New::getSize() {
    return size;
}
void Clothes_New::setCount(int count) {
    this->count = count;
}
string Clothes_New::getColor()
{
    if (enumColor == Color::BLACK) return "Black";
    if (enumColor == Color::BLUE) return "BLUE";
    if (enumColor == Color::GREEN) return "GREEN";
    if (enumColor == Color::WHITE) return "WHITE";
    if (enumColor == Color::YELLOW) return "YELLOW";

}

Clothes_New::operator string()
{
    return this->name + " " + std::to_string(this->count) + " " + std::to_string(this->size) + " " + this->getColor();
}

bool Clothes_New::operator > (Clothes_New m2)
{
    return m2.getCount() > this->getCount();
}

bool Clothes_New::operator < (Clothes_New m2)
{
    return m2.getCount() < this->getCount();
}

string Clothes_New::getText()
{
    return (string)this->getColor();
}

bool Clothes_New::maxCount(int count)
{
    if (count < this->count) return true;
    else return false;
}

int Clothes_New::sum(Clothes_New& clothes)
{
    return this->sum(clothes.count);
}

int Clothes_New::sum(int count)
{
    return this->count + count;
}

