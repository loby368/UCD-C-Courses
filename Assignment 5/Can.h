const double Pi=3.1415;

//Can Class
class Can
{
private:
    double radius;
    double height;
    double currentVolume;//Variable to track how much product is currently in the can

public:
    Can(double r, double h);
    double volume();
    void removeFromCan(Product& x);
    void printCanData();
};

