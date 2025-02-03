#include <iostream>
using namespace std;
#include "Product.h"
#include "Can.h"

Can::Can(double r, double h)
{
    radius = r;
    height = h;
    currentVolume = Pi*r*r*h;//Can is completly full when created
}

double Can::volume()
{
    return Pi*radius*radius*height;
}

void Can::removeFromCan(Product& x)
{
    if (x.getProductVolume() > currentVolume)
    {
        cout << "\nError: You tried to remove " << x.getProductVolume() << ", but the can only has ";
        cout << currentVolume <<" of Product\n";
    }
    else //Remove product from the can
    {
        currentVolume -= x.getProductVolume();
        cout << "\nYou have removed " << x.getProductVolume() << " from the can\n";
    }
}

void Can::printCanData()
{
    cout << "\nThe can has Radius = " << radius << ", Height = " << height << ", Volume = " << volume() << "\n";
    cout << "The Current Volume of Product in the can is " << currentVolume << "\n";
}

