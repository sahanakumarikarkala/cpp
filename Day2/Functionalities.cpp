#include "Functionalities.h"

void CreateObjects(Vehicle* container[3])
{
}

float AveragePrice(Vehicle* container[3])
{
    float total = 0.0f;
    for (int i = 0; i < 3; i++)
    {
        // in cpp -> means * also 
        // If the refrence is object then -> is used 
        total += container[i]->price();

    }
    return total / 3;
}