#include "Functionalities.h"
#include "Vehicle.h"
#include "Type.h"
void CreateObjects(Vehicle *container[3])
{
    // containers 0 index now holds the address of the object on the heap
    container[0] = new Vehicle("v101", "Maruthi", Type::CAR, 870000.0f);
    container[1] = new Vehicle("v102", "Honda", Type::BIKE, 970000.0f);
    container[2] = new Vehicle("v103", "Yamaha", Type::OTHER, 1270000.0f);
}

float AveragePrice(Vehicle *container[3])
{
    float total = 0.0f;
    for (int i = 0; i < 3; i++)
    {
        // in cpp -> means * also
        // If the refrence is object then -> is used
        // total += (container[i])->price();
        // Or
        total +=(*container[i]).price();
    }
    return total / 3;
}