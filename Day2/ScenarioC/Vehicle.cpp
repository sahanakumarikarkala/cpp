#include "Vehicle.h"

Vehicle::Vehicle(std::string id, std::string brand, float price, VehicleType type)
    : _id(id), _brand(brand), _price(price), _type(type)
{
}

Vehicle::Vehicle(std::string id, std::string brand, VehicleType type)
    : _id(id), _brand(brand), _type(type)
{
}
