#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include "CarType.h"
class Car : public Vehicle
{
private:
    CarType _car_type;

public:
    // 4+1

    Car(std::string id, std ::string brand, float price, VehicleType type, CarType cType);
    Car(std::string id, std ::string brand, VehicleType type, CarType cType);

    ~Car()
    {
        std::cout << "Car Part of Vehicle with Id :"
                  << id()
                  << "is destroyed\n";
    }

    float CalculateTax() override;
    // by semantics -- getter for carType
    CarType carType() const { return _car_type; }
};

#endif // CAR_H
