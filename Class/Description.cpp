#include "Description.h"

Description::Description(string name, int count, int size, Color color, string description):
	Clothes_New::Clothes_New(name, count, size, color)
{
	this->description = description;
}

Description::Description() :Description("skirt", 4, 42, Color::BLUE, "a little skirt") {}

string Description::getDescription()
{
	return description;
}

string Description::getText()
{
	Clothes_New::getText();
	return this->description;
}
