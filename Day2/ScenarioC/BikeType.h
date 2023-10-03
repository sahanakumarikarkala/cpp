#ifndef BIKETYPE_H
#define BIKETYPE_H
#include<iostream>
#include<string>
enum class BikeType{
    COMMUTE,
    SPORTS,
    ATV
};

std::string bikeTypeToString(BikeType type) {
    switch (type) {
    case BikeType::COMMUTE:
        return "COMMUTE";
    case BikeType::SPORTS:
        return "SPORTS";
    case BikeType::ATV:
        return "ATV";
    default:
        return "UNKNOWN";
    }
}
#endif // BIKETYPE_H
