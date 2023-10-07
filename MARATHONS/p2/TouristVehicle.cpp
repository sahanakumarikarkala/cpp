#include "TouristVehicle.h"
#include <iostream>

TouristVehicle::TouristVehicle(std::string number, VehicleType type, int seat_count, float per_hour_booking_charge)
:_number(number),_type(type),_seat_count(seat_count),_per_hour_booking_charge(per_hour_booking_charge)
{
}
std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs) {
    os << "_number: " << rhs._number
       << " _type: " <<displayEnum(rhs._type)
       << " _seat_count: " <<rhs._seat_count
       << " _per_hour_booking_charge: " << rhs._per_hour_booking_charge;
    return os;
}

std::string displayEnum(const VehicleType type){
    if(type==VehicleType::BIKE){
        return "BIKE";
    }
    else if(type==VehicleType::BUS){
        return "BUS";
    }
    else{
        return "CAB";
    }
}
