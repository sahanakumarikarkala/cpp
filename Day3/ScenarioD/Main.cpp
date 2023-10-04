#include <iostream>
#include "VehicleType.h"
#include "Vehicle.h"
#include "Functionalities.h"

#include<memory>
int main()
{
    Vehicle *arr[3];
    CreateObjects(arr);
    AveragePrice(arr);
    Vehicle min_vehicle = FindMinPriceVehicle(arr);
    Vehicle max_vehicle = FindMaxPriceVehicle(arr);
    std::cout << "Min price vehicle is " << min_vehicle << std::endl;
    std::cout << "Max price vehicle is " << max_vehicle << std::endl;
    return 0;
    // std::unique_ptr<Vehicle> uptr;
}