#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Customer.h"

void createObjects(Customer *arr[3]);

float AverageStorePoints(Customer *arr[3]);

Customer** GetCustomerByType(Customer *arr[3], CustomerType type);

Customer** GetCustomerWithStoreCredits(Customer *arr[3]);
#endif // FUNCTIONALITIES_H
