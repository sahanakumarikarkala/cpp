#include "Vehicle.h"

Vehicle::Vehicle(std::string id, std::string brand, float price, VehicleType type)
: _id(id),_brand(brand),_price(price),_type(type)
{
}

float Vehicle::CalculateTax()
{
    return 0.0f;
}

float Vehicle::CalculateTax(float tax_percent)
{
    return 0.0f;
}

float Vehicle::CalculateTax(float sgst, float cgst)
{
    return 0.0f;
}

std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "_id: " << rhs._id
       << " _brand: " << rhs._brand
       << " _price: " << rhs._price
       << " _type: " << DisplayEnum(rhs._type);
    return os;
}

std::string DisplayEnum(const VehicleType value)
{
    if (value == VehicleType::BIKE)
    {
        return "BIKE";
    }
    else if (value == VehicleType::CAR)
    {
        return "CAR";
    }
    else
    {
        return "OTHER";
    }
    
}
