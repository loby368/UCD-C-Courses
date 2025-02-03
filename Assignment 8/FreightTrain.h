class FreightTrain : public Train //No need to include Asset class since Train has already inherited Asset
{
private:
    int numWagons; // new data field, not in Vehicle class

public:
    FreightTrain(int ID, float v, int y); // constructor
    void setWagons(int w); // new method, not in Vehicle class
    int operator + (FreightTrain input);  //Operator overload
    void print_details();  //Overriding inherited method...
    void depreciateAsset();  //Overriding inherited method...
};
