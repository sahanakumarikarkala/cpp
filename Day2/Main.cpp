#include "Vehicle.h"
#include "Type.h"
#include "Functionalities.h"

int main(){
    Vehicle* arr[3];
    CreateObjects(arr);
    std::cout << "Average price : "<<AveragePrice(arr);
}