#include "Functionalities.h"

void createObjects(Customer *a[SIZE])
{
    a[0] = new Customer("Sahana", "C101", CustomerType::ELITE, CreditCard("9845 9879 9800 9874", CardType::SIGNATURE, 20000.0f, 233));
    a[1] = new Customer("Dheya", "C102", CustomerType::ELITE, CreditCard("1905 1967 1645 1754", CardType::NEO, 10000.0f, 233));
    a[2] = new Customer("Pooja", "C103", CustomerType::PRO, CreditCard("2436 2434 2734 2834", CardType::SIGNATURE, 12000.0f, 233));
}

std::string GetNumberOfMinimumLimit(Customer *a[SIZE])
{
    //intiializing min
    float min = a[0]->creditCard().limit();
    // customer number
    std::string customer_number = a[0]->creditCard().number();
    for (int i = 1; i < SIZE; i++)
    {
        if (a[i]->creditCard().limit() < min)
        {
            min = a[i]->creditCard().limit();
            customer_number = a[i]->creditCard().number();
        }
    }
    return customer_number;
}


CreditCard **GetCreditCardsCardType(Customer *a[SIZE], CardType card_type)
{
    // initialtize to empty nullptr
    CreditCard **credit_card = new CreditCard *[SIZE]{ nullptr };
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (a[i]->creditCard().type() == card_type)
        {
            credit_card[count] = new CreditCard(a[i]->creditCard().number(), a[i]->creditCard().type(), a[i]->creditCard().limit(), a[i]->creditCard().cardCvvNumber());
            count++;
        }
    }
    if (count == 0)
    {
        throw std::runtime_error("No credit cards with given card type");
    }
    return credit_card;
}

CustomerType GetCustomerTypeUsingId(Customer *a[SIZE], std::string id)
{
    for (int i = 0; i < SIZE; i++)
    { //checking whether id is ual to passed id
        if (a[i]->id() == id)
        {
            return a[i]->customerType();
        }
    }
    throw std::runtime_error("No customer with given id");
}

bool GetCustomerCardType(Customer *a[SIZE])
{
 //    If all card types are Signature then return true else false
    for (int i = 0; i < SIZE; i++)
    {
        if (a[i]->creditCard().type() != CardType::SIGNATURE)
        {
            return false;
        }
    }
    return true;
}

void FreeMemory(Customer *a[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        delete a[i]; 
    }
}

void checkNull(Customer *a[SIZE])
{
    // if all are empty then throw exception else return
    for (int i = 0; i < SIZE; i++)
    {
        if (a[i] != nullptr)
        {
            return;
        }
    }
    throw std::runtime_error("All customers are empty");
}
