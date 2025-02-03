class FreightTrain : public Train
{
private:
    int numWagons; // new data field, not in Vehicle class

public:
    FreightTrain(int ID); // constructor
    void setWagons(int w); // new method, not in Vehicle class
    int operator + (FreightTrain input);  //Operator overload
    void print_details(); // overriding inherited method...
};
