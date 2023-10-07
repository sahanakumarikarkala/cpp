#include "Functionalities.h"

void createObjects(Customer *customers[SIZE])
{
    customers[0] = new Customer("Varshith", "C101", CustomerType::ELITE, CreditCard("1234 1234 1234 1234", CardType::SIGNATURE, 20000.0f, 233));
    customers[1] = new Customer("Raj", "C102", CustomerType::ELITE, CreditCard("1235 1234 1234 1234", CardType::NEO, 10000.0f, 233));
    customers[2] = new Customer("Shravan", "C103", CustomerType::PRO, CreditCard("1236 1234 1234 1234", CardType::SIGNATURE, 12000.0f, 233));
}

std::string GetNumberOfMinimumLimit(Customer *customers[SIZE])
{
    // minimum limit
    float min_limit = customers[0]->creditCard().limit();
    // customer number
    std::string customer_number = customers[0]->creditCard().number();
    for (int i = 1; i < SIZE; i++)
    {
        if (customers[i]->creditCard().limit() < min_limit)
        {
            min_limit = customers[i]->creditCard().limit();
            customer_number = customers[i]->creditCard().number();
        }
    }
    return customer_number;
}

CreditCard **GetCreditCardsCardType(Customer *customers[SIZE], CardType card_type)
{
    // initialtize to empty nullptr
    CreditCard **credit_cards = new CreditCard *[SIZE]
    { nullptr };
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (customers[i]->creditCard().type() == card_type)
        {
            credit_cards[count] = new CreditCard(customers[i]->creditCard().number(), customers[i]->creditCard().type(), customers[i]->creditCard().limit(), customers[i]->creditCard().cardCvvNumber());
            count++;
        }
    }
    if (count == 0)
    {
        throw std::runtime_error("No credit cards with given card type");
    }
    return credit_cards;
}

CustomerType GetCustomerTypeUsingId(Customer *customers[SIZE], std::string id)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (customers[i]->id() == id)
        {
            return customers[i]->customerType();
        }
    }
    throw std::runtime_error("No customer with given id");
}

bool GetCustomerCardType(Customer *customers[SIZE])
{
//    If all card types are Signature then return true else false
    for (int i = 0; i < SIZE; i++)
    {
        if (customers[i]->creditCard().type() != CardType::SIGNATURE)
        {
            return false;
        }
    }
    return true;
}

void FreeMemory(Customer *customers[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        delete customers[i];
    }
}

void checkAllCustomerEmpty(Customer *customers[SIZE])
{
    // if all are empty then throw exception else return
    for (int i = 0; i < SIZE; i++)
    {
        if (customers[i] != nullptr)
        {
            return;
        }
    }
    throw std::runtime_error("All customers are empty");
}
