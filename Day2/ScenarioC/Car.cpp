#include "Car.h"
#include "Vehicle.h"
Car::Car(std::string id, std::string brand, float price, VehicleType type, CarType cType)
    : Vehicle(id, brand, price, type), _car_type(cType) // equivalent to super(id,brand,proce,type); this.car_type = cType in java
{
}

Car::Car(std::string id, std::string brand, VehicleType type, CarType cType)
    : Vehicle(id, brand, type), _car_type(cType)
{
}

std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _car_type: " << DisplayEnum(rhs._car_type);
    return os;
}

std::string DisplayEnum(const CarType val)
{
    if (val==CarType::SUV)
    {
        return "SUV";
        /* code */
    }
    else if(val==CarType::SEDAN){
        return "SEDAN";
    }
    else{
        return "HATCHBACK";
    }
    
}

float Car::CalculateTax()
{
    return 0.1f * price();
}
