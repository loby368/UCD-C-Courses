class Train : public Vehicle, public Asset
{
private:
    int numLocomotives; //New data field, not in Vehicle class

public:
    Train(int ID, float v, int y); //Constructor
    void setLocomotives(int n); //New method, not in Vehicle class
    int getLocomotives(); //Method to return private data field
    void print_details(); //Overriding inherited method...
    void depreciateAsset();  //Overriding inherited method...
};
