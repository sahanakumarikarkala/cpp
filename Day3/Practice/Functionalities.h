#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Car.h"
#include "CarCategory.h"
void CreateOjects(Car *arr[3]);

int FindAverageFuelCapacity(Car *arr[3]);

int FindCountOfGivenBrand(Car *arr[3],CarCategory type);

Car FindBestPassengerCar(Car *arr[3],CarCategory type);



#endif // FUNCTIONALITIES_H
