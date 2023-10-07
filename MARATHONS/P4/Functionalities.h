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

//find and return number of card whose limit is minimum
CreditCard** GetCreditCardsCardType(Customer* a[SIZE], CardType card_type);

//function to get the id by customer type
CustomerType GetCustomerTypeUsingId(Customer* a[SIZE], std::string id);

//function to get the customer card type
bool GetCustomerCardType(Customer* a[SIZE]);

//function to delete the objects
void FreeMemory(Customer* customers[SIZE]);

void checkNull(Customer* customers[SIZE]);

#endif // FUNCTIONALITIES_H
