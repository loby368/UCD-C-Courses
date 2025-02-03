#include <iostream>
#include "NumberSet.h"
using namespace std;

int GetValueIn();

//Function to get interger value from user
int GetValueIn()
{
    int userValue;
    cout << "\tEnter an interger number: ";
    cin >> userValue;
    return userValue;
}

int main()
{

//Generate new numberset to be used
    NumberSet set = newNumberSet();

    cout << "Task 1: Put numbers 1-11 into array\n";
    for (int num = 1; num <= 11; num++)
    {
        numberSetAdd(set, num);
    }

    cout << "Task 2: Get interger value from user\n";
    int userValue = GetValueIn();

    cout << "\nTask 3: Perform Operations on set\n";
    cout << "\tThe number of elements smaller than " << userValue << " in the set is: " << numberSetCountLessThan(set, userValue) << "\n";
    cout << "\tThe average of the odd elements in the set is: " << numberSetAverageOdd(set) << "\n\n";

    cout << "Task 4: Remove values from array\n";
    numberSetRemove(set, 2);
    numberSetRemove(set, 3);
    numberSetRemove(set, 19);

    cout << "Task 5: Re-Perform Operaitons on set after Removing values\n";
    cout << "\tThe number of elements smaller than " << userValue << " in the set is: " << numberSetCountLessThan(set, userValue) << "\n";
    cout << "\tThe average of the odd elements in the set is: " << numberSetAverageOdd(set) << "\n";

    return 0;
}
