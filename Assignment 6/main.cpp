#include <iostream>
using namespace std;
#include "weight.h"

int main()
{
    //Get data from user
    int ounces1, ounces2;
    cout << "Enter the weight of two people:\n" << "\tPerson 1(ounces): ";
    cin >> ounces1;
    cout << "\tPerson 2(ounces): ";
    cin >> ounces2;

    //Create two new weight objects
    Weight Person1(ounces1);
    Weight Person2(ounces2);

    //Output Weights to user
    cout << "\nYou have created Two new people\n";
    cout << "\tThe weight of Person 1 is: ";
    Person1.printWeight();
    cout << "\tThe weight of Person 2 is: ";
    Person2.printWeight();

    //Add Person 1 and Person 2
    cout << "\nTest: Add Person 1 to Person 2\n";
    Weight SummedWeight(Person1 + Person2); //Create new object to hold result
    cout << "\tThe weight of Person 1 + Person 2 is: ";
    SummedWeight.printWeight(); //Print out the object holding the result

    //Test to see which is heavier
    cout << "\nTest: Who is heavier?\n";
    if ( Person1 > Person2 )
    {
        cout << "\tPerson 1 is heavier than Person 2\n";
    }
    else if (!(Person1 > Person2) && !(Person2 > Person1)) //Test to see if they are equal
    {
        cout << "\tPerson 1 is the same weight Person 2\n";
    }
    else
    {
        cout << "\tPerson 2 is heavier than Person 1\n";
    }

    //Increment both
    ++Person1;
    ++Person2;

    //Output Result of Incrementation
    cout << "\nTest: Increment Person 1 and Person 2 by 1 ounce\n";
    cout << "\tThe weight of Person 1 is: ";
    Person1.printWeight();
    cout << "\tThe weight of Person 2 is: ";
    Person2.printWeight();

    //Add user-specified weight to both people
    int addWeight;
    cout << "\nEnter a weight in ounces which will be added to both people: ";
    cin >> addWeight;
    Person1.addOunces(addWeight);
    Person2.addOunces(addWeight);

    //Output results of adding the weight
    cout << "\nYou have added " << addWeight << " ounces to both people\n";
    cout << "\tThe weight of Person 1 is: ";
    Person1.printWeight();
    cout << "\tThe weight of Person 2 is: ";
    Person2.printWeight();

    return 0;
}
