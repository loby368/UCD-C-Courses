typedef int Number;

const int maxSize = 10;

struct NumberSet
{
    Number items[maxSize];
    int count;
};

//Function Prototypes
void numberSetAdd(NumberSet& set, Number num);          //Adds 'num' to 'set' (if possible); otherwise prints error message and makes no change to 'set'
void numberSetRemove(NumberSet& set, Number num);       //Removes first instance (if it exists) of 'num' from 'set'; otherwise prints error message and makes no change to 'set'
int numberSetCountLessThan(NumberSet& set, Number num); //Returns the number of elements smaller than 'num' in 'set'
double numberSetAverageOdd(NumberSet& set);             //Returns the average of the odd elements in 'set' or -1 if there are no odd elements
NumberSet newNumberSet();                               //Returns a new, empty NumberSet
