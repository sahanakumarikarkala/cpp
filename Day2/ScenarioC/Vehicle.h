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
    // Copy Constructor
    Vehicle(const Vehicle &obj) = default;
    // Default Constrcutor and do not use it .....
    // Vehicle()=default
    Vehicle(std::string id, std ::string brand, float price, VehicleType type);
    Vehicle(std::string id, std ::string brand, VehicleType type);

    // Abstract method in CPP
    virtual float CalculateTax() = 0; // pure virtual function ( known as Abstract methos in Java)

    virtual ~Vehicle()
    {

        std::cout
            << "Object with ID :"
            << _id
            << "is destroyed\n";
    }

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    float price() const { return _price; }

    VehicleType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);

    
};


//It takes one enum vakue and prints its string form
// Based on the logiv written inside the bosy
std::string DisplayEnum(const VehicleType value);
#endif // VEHICLE_H
