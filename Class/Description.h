#pragma once
#include "Clothes_New.h"
class Description :
    public Clothes_New
{
public:
    Description(string name, int count, int size, Color color, string description);
    Description();
    string getDescription();
    string getText() override;
private:
    string description;
};

