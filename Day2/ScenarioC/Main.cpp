#include "Car.h"
#include <iostream>
#include "Functionalities.h"
int main()
{
    // 3 locations reserved ; each location can store upto 8 bytes(address)
    Vehicle *arr[3];
    CreateObjects(arr);

    std::cout << "Average Price :"
              << AveragePrice(arr) << "\n";
    CallToCalculateTax(arr);

    FreeMemory(arr);
}