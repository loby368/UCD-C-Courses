#include <iostream>
using namespace std;

#include "Vehicle.h"
#include "Asset.h"
#include "Train.h"
#include "FreightTrain.h"

FreightTrain :: FreightTrain(int ID, float v, int y) : Train(ID, v, y)
{
    numWagons = 20;
}

void FreightTrain::setWagons(int w)
{
    numWagons = w;
}

int FreightTrain::operator + (FreightTrain input)
{
    int sum = numWagons + input.numWagons;
    return sum;
}

void FreightTrain::print_details()
{
    cout << "\n\tThe ID number of this Freight Train is " << get_vehicle_id() << "\n";
    cout << "\tThis Freight Train has " << numWagons << " Wagons\n";
    cout << "\tThis Freight Train has " << getLocomotives() << " Locomotives\n";
    if (get_v_registered() == true)
    {
        cout << "\tThis Freight Train is registered\n";
    }
    else
    {
        cout << "\tThis Freight Train is not registered\n";
    }

    //Modify print_details to to include asset data
    cout << "\tThe current value of this asset is " << getValue() << "\n";
    cout << "\tThis asset was aquired in " << getYear() << "\n\n";
}

//Overide depreciateAsset to decrease the value of a Train by 8%
void FreightTrain::depreciateAsset()
{
    setValue((getValue() - getValue()*0.08));
}
