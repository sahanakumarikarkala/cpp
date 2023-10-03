#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "VehicleType.h"

class Vehicle
{
private:
    std::string _id;
    std::string _brand;
    float _price;
    VehicleType _type;

public:
    Vehicle(const Vehicle &obj) = default;
    Vehicle(std::string id, std ::string brand, float price, VehicleType type);
    Vehicle(std::string id, std ::string brand, VehicleType type);

    // Abstract method in CPP
    virtual float CalculateTax() = 0; // pure virtual function ( known as Abstract methos in Java)

    ~Vehicle(){

        std::cout
        <<"Object with ID :"
        <<_id
        <<"is destroyed\n";

    }

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    float price() const { return _price; }

    VehicleType type() const { return _type; }
};

#endif // VEHICLE_H
