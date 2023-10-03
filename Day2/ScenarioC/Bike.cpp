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

std::ostream &operator<<(std::ostream &os, const Bike &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _bike_mileage: " << rhs._bike_mileage
       << " _bike_type: " << DisplayEnum(rhs._bike_type);
    return os;
}

std::string DisplayEnum(const BikeType val)
{
    if (val==BikeType::ATV)     
    {
        return "ATV";
    }
    else if(val==BikeType::COMMUTE){
        return "COMMUTE";
    }
    else{
        return "SPORTS";
    }
    
}
