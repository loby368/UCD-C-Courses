#include <iostream>
#include <fstream>
using namespace std;

#include "Vehicle.h"
#include "Asset.h"
#include "Train.h"
#include "FreightTrain.h"

//Define size of array to hold data from text file
const int arraySize = 14;

int main()
{
    // Declare file stream (fs) variables
    ifstream dataIn("comp20080-autumn2019-Asst8-data.txt");
    ofstream dataOut("comp20080-autumn2019-Asst8-output.txt");

    //Check is it has opened correctly
    if (!dataIn.is_open())
    {
        cout << "Error, Data File could not be opened correctly";
        return -1;
    }

    if (!dataOut.is_open())
    {
        cout << "Error, Write File could not be opened correctly";
        return -1;
    }

    //Create array to hold data from text file
    //New lines are written into new spots in array
    int data[arraySize];
    for (int i = 0; i <= arraySize; i++)
    {
        dataIn >> data[i]; //Each time dataIn is called the curser moves to a new line of the text file
    }

    //Declare new Train object T1 with ID as Line 1, Value as Line 2, Year as Line 3
    //Array is zero indexed so lin number is one position less in array, i.e. Line 7 = position 6
    Train T1(data[0], data[1], data[2]);

    //Declare Freight Train objects with ID as Line 4, Value as Line 5, Year as Line 6, and 7,8,9 for FT2
    FreightTrain FT1(data[3], data[4], data[5]);
    FreightTrain FT2(data[6], data[7], data[8]);

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

    //Set number of Locomotives to 10th, 11th and 12th lines of text file
    T1.setLocomotives(data[9]);
    FT1.setLocomotives(data[10]);
    FT2.setLocomotives(data[11]);

    //Set Wagons to 13th and 14th lines of text file
    FT1.setWagons(data[12]);
    FT2.setWagons(data[13]);

    //Depreciate Vlues of all three objects
    T1.depreciateAsset();
    FT1.depreciateAsset();
    FT2.depreciateAsset();

    cout << "-------------------------------------------------------\n";

    //Print out details
    cout << "\nResults after changes have been made to objects:\n\n";
    cout << "Train T1:";
    T1.print_details();
    cout << "Freight Train FT1:";
    FT1.print_details();
    cout << "Freight Train FT2:";
    FT2.print_details();

    //Write result of adding FT1 and FT2 to new textfile
    dataOut << FT1 + FT2;

    dataOut.close();//Close write text file
    dataIn.close();//Close read text file
    return 0;
}
