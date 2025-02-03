#include <iostream>
using namespace std;

#include "Asset.h"

Asset::Asset(float v, int y)
{
    value = v;
    year = y;
}

float Asset::getValue()
{
    return value;
}

void Asset::setValue(float v)
{
    value = v;
}

int Asset::getYear()
{
    return year;
}

void Asset::depreciateAsset()
{
    value -= value*0.1; //Depreciate asset by 10% as default
}

void Asset::print_details()
{
    cout << "Value: " << value << "\n";
    cout << "Year: " << year << "\n";
}
