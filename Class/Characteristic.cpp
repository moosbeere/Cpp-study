#include "Characteristic.h"

Characteristic::Characteristic(std::string color)
{
	this->color = color;
}

int Characteristic::colorCount(Clothes_New* clothes)
{
	clothes->color = this->color;
	return clothes->count;
}
