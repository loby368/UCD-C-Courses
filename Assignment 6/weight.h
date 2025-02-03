//Weight Class
class Weight
{
private:
    int stones;
    int pounds;
    int ounces;

public:
    Weight(int w);               //Conctructor
    Weight operator +(Weight w); //Add two weight classes
    bool operator >(Weight w);   //Greater than test
    void operator ++();          //Increment weight
    void addOunces(int w);       //Add 'w' ounces onto weight object
    void printWeight();          //Print out private data of weight object
};

