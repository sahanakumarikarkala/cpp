#include <iostream>
#include "Functionalities.h"
#include "Card.h"
#include "CreditCard.h"
#include "DebitCard.h"
#include "CardCategory.h"
#include "Issuer.h"

int main()
{
    Card *cards[5];
    createObjects(cards);
    // Card **result;
    Card **visaCards = getCardByIssuer(cards, Issuer::VISA);
    std::cout << "Visa Cards: "
              << "\n";
    std::cout << "-----------------------"
              << "\n";
    for (int i = 0; i < 5; i++)
    {
        if (visaCards[i] != nullptr)
        {
            std::cout << *visaCards[i] << "\n";
        }
    }
    std::cout << "-----------------------"
              << "\n";
    std::cout << "CVV Number of Highest Annual Charge: " << getHighestAnnualCharge(cards) << "\n";
    std::cout << "-----------------------"
              << "\n";
    std::cout << "Card by number: " << *getCardByNumber(cards, 1235) << "\n";
    std::cout << "-----------------------"
              << "\n";
    FreeMemory(cards);
}