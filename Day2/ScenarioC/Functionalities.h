#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Vehicle.h"

// Create objects on heap and store their pointers on the array
void CreateObjects(Vehicle *garage[3]);

float AveragePrice(Vehicle *garage[3]);

// Demo of CalculateTax

void CallToCalculateTax(Vehicle *garage[3]);

// For deleting or destroying objects of the car
void FreeMemory(Vehicle *garage[3]);

#endif // FUNCTIONALITIES_H
