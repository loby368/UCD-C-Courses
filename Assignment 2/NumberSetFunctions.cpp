#include <iostream>
#include "NumberSet.h"
using namespace std;


void numberSetAdd(NumberSet& set, Number num)
{
    if (set.count < maxSize)
    {
        set.items[set.count] = num;
        (set.count)++; //Store current size of array in count variable
    }

    else //Print Error Message
    {
        cout << "\tError, Array can only hold " << maxSize << " elements\n\n";
    }
}


void numberSetRemove(NumberSet& set, Number num)
{
    //Declare variable to record wheather 'num' is in the array or not
    int check = 0;

    //Scan through array to try and find 'num'
    for (int i = 0; i < set.count; i++)
    {
        if (set.items[i] == num)
        {
            //Write next element up into i's spot and repeat for rest of array
            for (int j = i; j < maxSize - 1; j++)
            {
                set.items[j] = set.items[j+1];
            }
            set.count --; //This updates the variable which records a live value for the number of elements in the set
            /*We leave the "filler" numbers at the end of the array as the previously largest number in the array. By updating set.count we
            know how many elements are actually in the array and hence we can ignore these "filler" numbers if we ever need to use the array later.*/
            check = 1;//We have found 'num' so let this be known outside of the scope of this loop by changing 'check'
            break;//Break out of 'for' loop in case there is another instance of 'num' in the set
        }
    }
    if (check == 0)
    {
        //Print Error Message
        cout << "\tError, the number " << num << " is not in the array\n\n";
    }
}


int numberSetCountLessThan(NumberSet& set, Number num)
{
    int countLessThan = 0;//Variable to store the total count of elements less than 'num'
    for (int i = 0; i < set.count; i++)
    {
        if (set.items[i] < num)
        {
            countLessThan++;
        }
    }

    //Find biggest Number in the set
    int biggestNum = 0;
    for (int i = 0; i < set.count; i++)
    {
        if (set.items[i] > biggestNum)
        {
            biggestNum = set.items[i];
        }
    }
    if (num > biggestNum)
    {
        countLessThan = set.count;
        /*We can do this because we know the number the user has inputted is bigger than any number in our set. This is a failsafe because
        the "filler" numbers at the end of the array after removing elements take the form of the previously largest number in the array
        i.e: It stops us counting these extra "Filler" numbers as being less than 'num' more than once*/
    }
    return countLessThan;
}


double numberSetAverageOdd(NumberSet& set)
{
    double sumOdd = 0;
    double countOdd = 0;

    for (int i = 0; i < set.count; i++)
    {
        if (set.items[i] % 2 == 1)
        {
            sumOdd += set.items[i];
            countOdd++;
        }
    }

    if (countOdd != 0)
    {
        double avg = (sumOdd/countOdd);
        return avg;
    }
    else //No odd numbers in the set
    {
        return -1;
    }
}


NumberSet newNumberSet()
{
    NumberSet set;
    set.count = 0; //This variable is used to count how many elements are in 'set.items' and to start off we have zero elements
    return set;
}
