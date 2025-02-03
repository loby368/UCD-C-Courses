/* Louí Byrne - 18338601 - Assignment 1 */

#include <iostream>
#include <cstdlib>
using namespace std;

/*--------------------Sturctures--------------------*/

struct timet
{
    int hours;
    int minutes;
    int seconds;
};

/*----------------Function Prototypes----------------*/

timet computeTime(); //Function that takes two times (t1 & t2) and either adds or subtracts them
void checkOperationPerformed(); //Function which checks what operation we have done to the times so we can add context to the output
void convertToCanonical(); //Function to ensure minutes and seconds are in canonical form

/*---------------------Functions---------------------*/

timet computeTime(timet t1, timet t2)
{
    //t3 stores the Results
    timet t3;

    //Add Times
    if ( t1.hours >= 1 )
    {
        t3.seconds = t2.seconds + t1.seconds; //Add seconds
        t3.minutes = t2.minutes + t1.minutes + (t3.seconds/60); //Add minutes and the extra overflow of seconds
        t3.seconds = t3.seconds % 60; //Only keep the seconds that have overflowed
        t3.hours = t2.hours + t1.hours + (t3.minutes/60); //Add hours and the extra overflow of minutes
        t3.minutes = t3.minutes % 60; //Only keep the minutes tha have overflowed

        return t3;
    }

    //Subtract Times
    else
    {
        //Convert both times into seconds to make subtraction easier.
        int totalSeconds2 = t2.hours*60*60 + t2.minutes*60 + t2.seconds;
        int totalSeconds1 = t1.hours*60*60 + t1.minutes*60 + t1.seconds;

        //Calculate Difference between times in seconds.
        int totalSeconds3 = abs(totalSeconds2 - totalSeconds1); //The abs() ensures we give the diference between the times even if Time 1 > Time 2

        //Convert difference to Hours, Minutes and Seconds.
        t3.hours = totalSeconds3/(60*60); //How many hours go in evenly?
        totalSeconds3 -= t3.hours*(60*60); //Take hours off remaining seconds
        t3.minutes = totalSeconds3/60; //How many minutes go in evenly?
        totalSeconds3 -= t3.minutes*60; //Take minutes off remaining seconds
        t3.seconds = totalSeconds3; //Whatever is left is the seconds

        return t3;
    }

}


void checkOperationPerformed(timet t1)
{
    //Check whether we have added or subtraced times
    if (t1.hours > 0)
    {
        cout << "\nRESULT:\nThe Sum of Time 1 & Time 2 is: ";
    }
    else
    {
        cout << "\nRESULT:\nThe Difference between Time 1 & Time 2 is: ";
    }
}


void convertToCanonical(timet& t1, timet& t2)//Take in t1 and t2 as reference variables so we can make changes to them
{
    //Time 1
    if (t1.minutes > 59)
    {
        t1.hours += t1.minutes/60; //This truncates the operation so we get the extra hours contained within the minutes
        t1.minutes = t1.minutes%60; //Leave the remainder of minutes in the minutes variable
    }
    if (t1.seconds > 59)
    {
        t1.minutes += t1.seconds/60;
        t1.seconds = t1.seconds%60;
    }

    //Time 2
    if (t2.minutes > 59)
    {
        t2.hours += t2.minutes/60;
        t2.minutes = t2.minutes%60;
    }
    if (t1.seconds > 59)
    {
        t2.minutes += t2.seconds/60;
        t2.seconds = t2.seconds%60;
    }
}

/*------------------------Main-----------------------*/

int main()
{
    //Declare Variables
    timet t1;
    timet t2;
    //Variable to hold the output of computeTime in the scope of main()
    timet tOutput;

    //Get Data from User
    cout << "Please Enter values for the components of two times\n";
    cout << "\nTime 1\n";
    cout << "Enter Hours: ";
    cin >> t1.hours;
    cout << "Enter Minutes: ";
    cin >> t1.minutes;
    cout << "Enter Seconds: ";
    cin >> t1.seconds;

    cout << "\nTime 2:\n";
    cout << "Enter Hours: ";
    cin >> t2.hours;
    cout << "Enter Minutes: ";
    cin >> t2.minutes;
    cout << "Enter Seconds: ";
    cin >> t2.seconds;

    //Ensure all inputs are in canonical form
    convertToCanonical(t1,t2);

    //Call computeTime() and store result so it is in the scope of main()
    tOutput = computeTime(t1, t2);

    //Check whether we have added or subtraced times so we know how to present result to user
    checkOperationPerformed(t1);

    //Output result of computeTime()
    cout << tOutput.hours << " hours " << tOutput.minutes << " minutes " << tOutput.seconds << " seconds\n";

    return 0;
}
