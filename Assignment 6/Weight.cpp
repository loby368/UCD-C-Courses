#include <iostream>
using namespace std;
#include "weight.h"

//Constructor
Weight::Weight(int w)
{
    //Convert inputted ounces into canonical form
    int remainingOunces;
    stones = w / 224; //Number of ounces in 1 stone
    remainingOunces = w % 224;
    pounds = remainingOunces / 16;
    remainingOunces = remainingOunces % 16;
    ounces = remainingOunces;
}

Weight Weight::operator +(Weight w)
{
    //Convert both Weights to ounces
    int totalWeightCaller = (stones*224)+(pounds*16)+(ounces);
    int totalWeightCalled = (w.stones*224 + w.pounds*16 + w.ounces);

    Weight Wout(totalWeightCaller + totalWeightCalled);
    return Wout;
}

bool Weight::operator >(Weight w)
{
    //Convert both Weights to ounces
    int totalWeightCaller = (stones*224)+(pounds*16)+(ounces); //Left hand side of > sign
    int totalWeightCalled = (w.stones*224 + w.pounds*16 + w.ounces); //Right hand side of > sign

    if (totalWeightCaller > totalWeightCalled)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Weight::operator ++()
{
    addOunces(1); //Calls the addOunces function in the 'live' object and gives it an input parameter of 1
}

void Weight::addOunces(int w)
{
    int weightInOunces = (stones*224)+(pounds*16)+(ounces); //Convert to ounces
    weightInOunces += w; //Add w ounces to total weight

    //Convert back to canonical
    int remainingOunces;
    stones = weightInOunces / 224; //Number of ounces i a stone
    remainingOunces = weightInOunces % 224;
    pounds = remainingOunces / 16;
    remainingOunces = remainingOunces % 16;
    ounces = remainingOunces;
}

void Weight::printWeight()
{
    cout << stones << " Stone, " << pounds << " Pound, " << ounces << " Ounces.\n";
}

