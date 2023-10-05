#include <iostream>
#include "Car.h"
#include "CarCategory.h"
#include "Functionalities.h"

int main()
{
    Car *arr[3];
    CreateOjects(arr);

    std::cout << "Average fuel capacity of cars: " << FindAverageFuelCapacity(arr)<<"\n";
    std::cout << "Count of SEDAN cars: " << FindCountOfGivenBrand(arr, CarCategory::SEDAN)<<"\n";
    std::cout << "Best passenger car: " << FindBestPassengerCar(arr, CarCategory::SEDAN).carModel()<<"\n";

    for (int i = 0; i < 3; i++)
    {
        std::cout <<"\n"<< *arr[i]<<"\n";
    }
    return 0;
}