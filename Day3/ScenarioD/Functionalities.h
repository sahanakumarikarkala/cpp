#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <iostream>
#include "VehicleType.h"
#include "Vehicle.h"

void CreateObjects(Vehicle* arr[3]);
void AveragePrice(Vehicle* arr[3]);
Vehicle FindMinPriceVehicle(Vehicle *vehicles[3]);
Vehicle FindMaxPriceVehicle(Vehicle *vehicles[3]);

#endif // FUNCTIONALITIES_H
