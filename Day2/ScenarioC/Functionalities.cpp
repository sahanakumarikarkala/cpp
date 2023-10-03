#include "Functionalities.h"
#include "Car.h"
#include "VehicleType.h"
#include "CarType.h"
#include "Vehicle.h"
#include "Bike.h"
#include <iostream>
void CreateObjects(Vehicle *garage[3])
{
    garage[0] = new Car("v101", "Maruthi", 12000.0f, VehicleType::CAR, CarType::SEDAN);
    garage[1] = new Bike("bk111", "TVS",5000.0f,VehicleType::BIKE, 31.0f, BikeType ::SPORTS);
    garage[2] = new Car("v103", "Hyundai", 20000.0f, VehicleType::CAR, CarType::HATCHBACK);

    for(int i=0;i<3;i++){
        std::cout<<*(garage[i])<<"\n";
    }
}

float AveragePrice(Vehicle *garage[3])
{
    
    float total = 0.0f;
    for (int i = 0; i < 3; i++)
    {
        
        total += (garage[i])->price();
    }
    return total / 3;
}

void CallToCalculateTax(Vehicle *garage[3])
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << (garage[i])->CalculateTax() << '\n';
    }
}

void FreeMemory(Vehicle *garage[3])
{
    for (int i = 0; i < 3; i++)
    {
        delete garage[i];
    }
}
