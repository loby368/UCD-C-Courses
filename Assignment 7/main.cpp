#include <iostream>
#include <fstream>
#include "Vehicle.h"
#include "Train.h"
#include "FreightTrain.h"
using namespace std;

//Define size of array to hold data from text file
const int arraySize = 7;

int main()
{

    // Declare file stream (fs) variables
    ifstream dataIn("comp20080-autumn2019-Asst7-data.txt");

    //Check is it has opened correctly
    if (!dataIn.is_open())
    {
        cout << "Error, Data File could not be opened correctly";
        return -1;
    }

    //Create array to hold data from text file
    //New lines are written into new spots in array
    int data[arraySize];
    for (int i = 0; i <= arraySize; i++)
    {
        dataIn >> data[i]; //Each time dataIn is called the curser moves to a new line of the text file
    }

    //Declare new Train object T1 with ID as the 1st line of the text file, (Position 0 in array)
    Train T1(data[0]);

    //Declare Freight Train objects with ID numbers as 2nd and 3rd lines of text file
    FreightTrain FT1(data[1]);
    FreightTrain FT2(data[2]);

    //Print out details
    cout << "Train T1:";
    T1.print_details();
    cout << "Freight Train FT1:";
    FT1.print_details();
    cout << "Freight Train FT2:";
    FT2.print_details();

    //Register Vehicles
    T1.register_vehicle();
    FT1.register_vehicle();
    FT2.register_vehicle();

    //Set number of Locomotives to 4th, 5th and 6th lines of text file
    T1.setLocomotives(data[3]);
    FT1.setLocomotives(data[4]);
    FT2.setLocomotives(data[5]);

    //Set Wagons to 7th and 8th lines of text file
    FT1.setWagons(data[6]);
    FT2.setWagons(data[7]);

    cout << "-------------------------------------------------------\n";

    //Print out details
    cout << "\nResults after changes have been made to objects:\n\n";
    cout << "Train T1:";
    T1.print_details();
    cout << "Freight Train FT1:";
    FT1.print_details();
    cout << "Freight Train FT2:";
    FT2.print_details();

    //Print out result of adding Freight Train Objects
    cout << "The total number of wagons in FT1 + FT2 is: " << FT1 + FT2 << "\n";

    dataIn.close();//Close text file
    return 0;
}
