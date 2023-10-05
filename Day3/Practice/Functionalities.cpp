#include "Functionalities.h"

void CreateOjects(Car *arr[3])
{
    arr[0] = new Car("1", "BMW", "X5", CarCategory::SEDAN, 100000, 5, 100);
    arr[1] = new Car("2", "Mercedes", "C180", CarCategory::SUV, 50000, 5, 80);
    arr[2] = new Car("3", "Mercedes", "S500", CarCategory::SEDAN, 200000, 5, 120);
}

int FindAverageFuelCapacity(Car *arr[3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += arr[i]->carFuelCapacity();
    }
    return sum / 3;
}

int FindCountOfGivenBrand(Car *arr[3], CarCategory type)
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i]->carCategory() == type)
        {
            count++;
        }
    }
    return count;
}

Car FindBestPassengerCar(Car *arr[3], CarCategory type)
{
    // Best passenger car is who has highest number of car seats
    Car bestCar = *arr[0];
    for (int i = 0; i < 3; i++)
    {
        if (arr[i]->carCategory() == type)
        {
            if (arr[i]->carSeatCount() > bestCar.carSeatCount())
            {
                bestCar = *arr[i];
            }
        }
    }
    return bestCar;
}
