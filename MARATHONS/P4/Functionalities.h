#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Customer.h"
#include "CustomerType.h"
#include "CardType.h"
#include "CreditCard.h"
#define SIZE 3

//creating the 3 instance of the class
void createObjects(Customer* a[SIZE]);
std::string GetNumberOfMinimumLimit(Customer* a[SIZE]);

//find and return num
CreditCard** GetCreditCardsCardType(Customer* a[SIZE], CardType card_type);

CustomerType GetCustomerTypeUsingId(Customer* a[SIZE], std::string id);

bool GetCustomerCardType(Customer* a[SIZE]);

void FreeMemory(Customer* customers[SIZE]);

void checkAllCustomerEmpty(Customer* customers[SIZE]);

#endif // FUNCTIONALITIES_H
