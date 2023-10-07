#include <iostream>
#include "Product.h"
#include "Functionalities.h"


int main(){
    Product *a[5];
    //calling the createobject method
    createObjects(a);
    std::cout<<"\n Avg price :"<<averageProductPrize(a)<<"\n";
    std::cout<<"Product tax with minimum price :"<<productTaxamount(a)<<"\n";
    std::cout<<"Maximum product price :"<<maxProductPrize(a)<<"\n";
    freeMemory(a);
}