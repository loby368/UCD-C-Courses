class Asset
{

private:
    float value;  // current value of this asset
    int year;     // year this asset was acquired

public:
    Asset(float v, int y);   // sets value to v and year to y
    float getValue();        // returns value
    void setValue(float v);  // sets value to v
    int getYear();           // returns year
    void depreciateAsset();  // decreases value by 10%
    void print_details();    // prints out value and year
};
