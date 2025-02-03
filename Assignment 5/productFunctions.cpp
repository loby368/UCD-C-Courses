#include "Product.h"

Product::Product(double V)
{
    productVolume = V; //User-Defined constructor
}

Product::Product()
{
    productVolume = 5.95; //Default constructor
}

double Product::getProductVolume()
{
    return productVolume;
}
