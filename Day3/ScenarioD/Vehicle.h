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
    // Vehicle() = delete; // disabled default constructor
    Vehicle(std::string id, std::string brand, float price, VehicleType type);
    Vehicle(const Vehicle &) = default;
    Vehicle(/* args */)
    {
        std::cout
            << "Vehicle with ID :"
            << _id
            << " is destroyed\n";
    }
    float CalculateTax();
    float CalculateTax(float tax_percent);
    float CalculateTax(float sgst, float cgst);
    ~Vehicle() {}

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    float getPrice() const { return _price; }

    VehicleType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);
};

std::string DisplayEnum(const VehicleType value);

#endif // VEHICLE_H
