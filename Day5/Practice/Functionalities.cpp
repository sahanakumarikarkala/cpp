#include "Functionalities.h"
#include "CardCategory.h"
#include "Card.h"
#include "CardCategory.h"
#include "Issuer.h"
#include "Card.h"
#include "DebitCard.h"
#include "CreditCard.h"

/*
    A function to check if all pointers in the container is nullptr
    If all pointers are nullptr, return true
    Else return false
 */
bool isEmpty(Card *cards[5])
{
    for (int i = 0; i < 5; i++)
    {
        if (cards[i] != nullptr)
        {
            return false;
        }
    }
    return true;
}

/* A function  to create objects of type Card and store them in an array of pointers to Card.
 * The function should create 2 objects of type DebitCard and 3 objects of type CreditCard.
 * The function should return the array of pointers to Card.
 */
void createObjects(Card *cards[5])
{
    // 2 of DebitCard and 3 of CreditCard
    cards[0] = new DebitCard(1234, 123, Issuer::VISA, 100, 1000, CardCategory::DELUXE);
    cards[1] = new DebitCard(1235, 124, Issuer::MASTERCARD, 200, 2000, CardCategory::PREMIUM);
    cards[2] = new CreditCard(1236, 125, Issuer::VISA, 300, 3000, 1000);
    cards[3] = new CreditCard(1237, 126, Issuer::MASTERCARD, 400, 4000, 2000);
    cards[4] = new CreditCard(1238, 127, Issuer::VISA, 500, 5000, 3000);
}

/* A function to return array of Card pointers for those Cards whose _issuer matched the second parameter.
 * The function should return the array of pointers to Card.
 */
Card **getCardByIssuer(Card *cards[5], Issuer issuer)
{
    if (isEmpty(cards))
    {
        throw std::runtime_error("Empty container");
    }
    Card **result = new Card *[5];
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (cards[i]->issuer() == issuer)
        {
            result[count] = cards[i];
            count++;
        }
    }
    return result;
}

/* A function to return a Card pointer for the Card whose _number matched the second parameter.
 * The function should return the pointer to Card.
 */
Card getCardByNumber(Card *cards[5], int number)
{
    for (int i = 0; i < 5; i++)
    {
        if (cards[i]->number() == number)
        {
            return *cards[i];
        }
    }
    throw std::runtime_error("Card not found");
}

/* A function to return the highest annual charge among all the Cards.
 * The function should return the highest annual charge.
 */
int getHighestAnnualCharge(Card *cards[5])
{
    if (isEmpty(cards))
    {
        throw std::runtime_error("Empty container");
    }
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (cards[i]->annualCharge() > max)
        {
            max = cards[i]->annualCharge();
        }
    }
    return max;
}
