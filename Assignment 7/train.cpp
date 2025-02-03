#include <iostream>
using namespace std;

#include "Vehicle.h"
#include "Train.h"

//Constructor
Train :: Train(int ID) : Vehicle(ID)
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
        cout << "\tThis Train is registered\n\n";
    }
    else
    {
        cout << "\tThis Train is not registered\n\n";
    }
}
