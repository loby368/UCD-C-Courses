#include <iostream>
using namespace std;
#include "Product.h"
#include "Can.h"

int main()
{
    double H, R, P;
    //Create new Can Object
    cout << "Enter Dimensions for a new can:\n" << "\tRadius: ";
    cin >> R;
    cout << "\tHeight: ";
    cin >> H;
    Can can1(R,H);

    //Create user-defined Product object
    cout << "\nEnter a Volume of product to remove from the can : ";
    cin >> P;
    Product userProduct(P);

    //Create Default Product object
    Product defaultProduct;

    //Remove Product from the can and output can details to keep track
    can1.printCanData();

    cout << "\nTest: Remove Volume of product specified by user";
    can1.removeFromCan(userProduct);
    can1.printCanData();

    cout << "\nTest: Remove Deault Volume of Product";
    can1.removeFromCan(defaultProduct);
    can1.printCanData();

    return 0;
}
