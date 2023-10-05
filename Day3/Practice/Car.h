#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "CarCategory.h"
class Car
{
private:
    std::string _car_chasis_number;
    std::string _car_brand;
    std::string _car_model;
    CarCategory _car_category;
    float _car_price;
    int _car_seat_count;
    int _car_fuel_capacity;

public:
    Car(const Car &obj) = default;

    Car(std::string carChassisNumber, std::string carBrand, std::string carModel, CarCategory carCategory, float carPrice, int carSeatCount, int carFuelCapacity);
    Car(std::string carChassisNumber, std::string carBrand, std::string carModel, float carPrice);
    ~Car() {}

    std::string carChasisNumber() const { return _car_chasis_number; }

    std::string carBrand() const { return _car_brand; }

    std::string carModel() const { return _car_model; }

    CarCategory carCategory() const { return _car_category; }

    float carPrice() const { return _car_price; }

    int carSeatCount() const { return _car_seat_count; }

    int carFuelCapacity() const { return _car_fuel_capacity; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);

    
};

std::string DisplayEnum(CarCategory type);

#endif // CAR_H
