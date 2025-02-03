#include <iostream>
using namespace std;

#include "Vehicle.h"
#include "Train.h"
#include "FreightTrain.h"

FreightTrain :: FreightTrain(int ID) : Train(ID)
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
        cout << "\tThis Freight Train is registered\n\n";
    }
    else
    {
        cout << "\tThis Freight Train is not registered\n\n";
    }
}
