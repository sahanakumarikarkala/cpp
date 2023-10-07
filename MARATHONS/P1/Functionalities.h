#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Product.h"

//functon to create 5 instance of Product in heap
void createObjects(Product* a[5]);

//function to find and return the avg product price
float averageProductPrize(Product* a[5]);

//function to return the producttaxamount of the product with min price
float productTaxamount(Product* a[5]);


//function to return the maximum productprice value from all instances
float maxProductPrize(Product* a[5]);


//function to delete all the objects allocated on heap
void freeMemory(Product* a[5]);

#endif // FUNCTIONALITIES_H
