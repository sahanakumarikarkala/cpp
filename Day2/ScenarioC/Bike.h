#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"
#include "BikeType.h"
#include <ostream>
class Bike : public Vehicle
{
private:
    float _bike_mileage;
    BikeType _bike_type;

public:
    Bike(std::string id, std ::string brand, float price,  VehicleType type,float _bike_mileage, BikeType bType);
    Bike(std::string id, std ::string brand, VehicleType type, float _bike_mileage,  BikeType bType);
    ~Bike() {
         std::cout << "Bike Part of Vehicle with Id :"
                  << id()
                  << "is destroyed\n";
    }
    float CalculateTax() override;

    float bikeMileage() const { return _bike_mileage; }

    BikeType bikeType() const { return _bike_type; }


    
};

#endif // BIKE_H
