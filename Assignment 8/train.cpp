#include <iostream>
using namespace std;

#include "Vehicle.h"
#include "Asset.h"
#include "Train.h"

//Constructor
Train::Train(int ID, float v, int y) : Vehicle(ID), Asset(v,y)
{
    numLocomotives = 2;
}

void Train::setLocomotives(int n)
{
    numLocomotives = n;
}

int Train::getLocomotives()
{
    return numLocomotives;
}

void Train::print_details()
{
    cout << "\n\tThe ID number of this Train is " << get_vehicle_id() << "\n";
    cout << "\tThis train has " << numLocomotives << " Locomotives\n";
    if (get_v_registered() == true)
    {
        cout << "\tThis Train is registered\n";
    }
    else
    {
        cout << "\tThis Train is not registered\n";
    }

    //Modify print_details to to include asset data
    cout << "\tThe current value of this asset is " << getValue() << "\n";
    cout << "\tThis asset was aquired in " << getYear() << "\n\n";
}

//Overide depreciateAsset to decrease the value of a Train by 15%
void Train::depreciateAsset()
{
    setValue(getValue() - getValue()*0.15);
}
