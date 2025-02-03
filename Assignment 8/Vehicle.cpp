#include <iostream>
using namespace std;

#include "Vehicle.h"

Vehicle::Vehicle(int vid)
{
    vehicle_id = vid;
    v_registered = false;
}

void Vehicle::register_vehicle()
{
    v_registered = true;
}

void Vehicle::print_details()
{
    cout << "\nThis is vehicle number " << vehicle_id << "\n";
}

int Vehicle::get_vehicle_id()
{
    return vehicle_id;
}

bool Vehicle::get_v_registered()
{
    return v_registered;
}
