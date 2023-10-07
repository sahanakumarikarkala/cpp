#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<iostream>
#include "VehicleType.h"
#include "TouristVehicle.h"
#define SIZE 3

/*
Function to create 3 objects of Touristvehicle
*/
void createObject(TouristVehicle* arr[SIZE]);

/*
find and return pointer array whose seat count is atleast 4
*/
void findInstance(TouristVehicle* arr[SIZE],TouristVehicle* result[SIZE]);

/*
return avearge perHourBookingPrice of CAB vehicle
*/
float averageCharge(TouristVehicle* arr[SIZE]);

/*
TouristVehicle with maximum PerhourCharge
*/
void maximumPerHourCharge(TouristVehicle* arr[SIZE]);

/*
function to free the heap memory
*/
void freeMemory(TouristVehicle* arr[SIZE]);

bool checkAllNull(TouristVehicle* arr[SIZE]);


#endif // FUNCTIONALITIES_H
