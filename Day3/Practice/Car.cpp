#include "Car.h"

Car::Car(std::string carChassisNumber, std::string carBrand, std::string carModel, CarCategory carCategory, float carPrice, int carSeatCount, int carFuelCapacity)
:_car_chasis_number(carChassisNumber),_car_brand(carBrand),_car_model(carModel),_car_category(carCategory),_car_price(carPrice),_car_seat_count(carSeatCount),_car_fuel_capacity(carFuelCapacity)
{
}

Car::Car(std::string carChassisNumber, std::string carBrand, std::string carModel, float carPrice)
:_car_chasis_number(carChassisNumber),_car_brand(carBrand),_car_model(carModel),_car_price(carPrice)
{
}

std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << "_car_chasis_number: " << rhs._car_chasis_number
       << " _car_brand: " << rhs._car_brand
       << " _car_model: " << rhs._car_model
       << " _car_category: " << DisplayEnum(rhs._car_category)
       << " _car_price: " << rhs._car_price
       << " _car_seat_count: " << rhs._car_seat_count
       << " _car_fuel_capacity: " << rhs._car_fuel_capacity;
    return os;
}

std::string DisplayEnum(CarCategory type)
{
   if(type == CarCategory::SEDAN){
         return "SEDAN";
   }
    else if(type == CarCategory::SUV){
            return "SUV";
    }
    else{
            return "SPORTS_HATCHBACK";
    }
}
