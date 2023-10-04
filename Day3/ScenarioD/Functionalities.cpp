#include "Functionalities.h"
#include "Vehicle.h"

void CreateObjects(Vehicle *arr[3])
{
    arr[0] = new Vehicle("1", "Honda", 100000.0f, VehicleType::CAR);
    arr[1] = new Vehicle("2", "Hero", 50000.0f, VehicleType::CAR);
    arr[2] = new Vehicle("3", "Maruti", 500000.0f, VehicleType::CAR);
}

void AveragePrice(Vehicle *arr[3])
{
    float sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += arr[i]->getPrice();
    }
    std::cout << "Average price of vehicles is " << sum / 3 << std::endl;
}

Vehicle FindMinPriceVehicle(Vehicle *vehicles[3])
{
    Vehicle *min_vehicle = vehicles[0];
    for (int i = 1; i < 3; i++)
    {
        if (vehicles[i]->getPrice() < min_vehicle->getPrice())
        {
            min_vehicle = vehicles[i];
        }
    }
    return *min_vehicle;
}

Vehicle FindMaxPriceVehicle(Vehicle *vehicles[3])
{
    Vehicle *max_vehicle = vehicles[0];
    for (int i = 1; i < 3; i++)
    {
        if (vehicles[i]->getPrice() > max_vehicle->getPrice())
        {
            max_vehicle = vehicles[i];
        }
    }
    return *max_vehicle;
}
