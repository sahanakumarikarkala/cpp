#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Car.h"

// Create objects on heap and store their pointers on the array
void CreateObjects(Car *container[3]);

float AveragePrice(Car *container[3]);

// Demo of CalculateTax

void CallToCalculateTax(Car *container[3]);


// For deleting or destroying objects of the car
void FreeMemory(Car* container[3]);

#endif // FUNCTIONALITIES_H
