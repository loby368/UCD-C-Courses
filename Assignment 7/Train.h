class Train : public Vehicle
{
private:
    int numLocomotives; //New data field, not in Vehicle class

public:
    Train(int ID); //Constructor
    void setLocomotives(int n); //New method, not in Vehicle class
    int getLocomotives(); //Method to return private data field
    void print_details(); //Overriding inherited method...
};
