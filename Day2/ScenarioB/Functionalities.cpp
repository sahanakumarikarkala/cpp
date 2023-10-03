#include "Functionalities.h"
#include "Car.h"
#include "VehicleType.h"
#include "CarType.h"
#include "Vehicle.h"
#include <iostream>
void CreateObjects(Car *container[3])
{
    container[0] = new Car("v101", "Maruthi", 12000.0f, VehicleType::CAR, CarType::SEDAN);
    container[1] = new Car("v102", "Honda", 13000.0f, VehicleType::CAR, CarType::SUV);
    container[2] = new Car("v103", "Hyundai", 20000.0f, VehicleType::CAR, CarType::HATCHBACK);
    
}

float AveragePrice(Car *container[3])
{
    float total = 0.0f;
    for (int i = 0; i < 3; i++)
    {
        total += (container[i])->price();
    }
    return total / 3;
}

void CallToCalculateTax(Car *container[3])
{
    for(int i =0;i<3;i++){
        std::cout << (container[i])->CalculateTax()<<'\n';
    }
}

void FreeMemory(Car *container[3])
{
    for(int i=0;i<3;i++){
        delete container[i];
    }
}
