#pragma once
#include "Clothes_New.h"
class Characteristic
{
public:
	std::string color;
	Characteristic(std::string color);
	int colorCount(Clothes_New* clothes);
};

