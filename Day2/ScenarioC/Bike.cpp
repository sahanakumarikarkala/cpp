#include "Bike.h"
#include "Vehicle.h"
#include "BikeType.h"
#include "VehicleType.h"

Bike::Bike(std::string id, std::string brand, float price, VehicleType type, float _bike_mileage, BikeType bType)
    : Vehicle(id, brand, price, type), _bike_mileage(_bike_mileage), _bike_type(bType)
{
}

Bike::Bike(std::string id, std::string brand, VehicleType type, float _bike_mileage, BikeType bType)
    : Vehicle(id, brand, type), _bike_mileage(_bike_mileage), _bike_type(bType)
{
}

float Bike::CalculateTax()
{
    return 0.05f * price();
}
