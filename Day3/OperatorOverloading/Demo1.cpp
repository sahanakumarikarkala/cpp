#include <iostream>
#include "Vehicle.h"
#include "VehicleType.h"

int main()
{
    Vehicle v1("1", "Honda", 100000.0f, VehicleType::BIKE);
    Vehicle v2("2", "Honda", 200000.0f, VehicleType::CAR);

    std::cout << "v1 + v2 = " << v1 + v2 << std::endl;
    Vehicle *v3 = new Vehicle("3", "Honda", 300000.0f, VehicleType::CAR);
    Vehicle *v4 = new Vehicle("4", "Honda", 400000.0f, VehicleType::CAR);
    std::cout << "v1 + v3 = " << *v4 + *v3  << std::endl;
}