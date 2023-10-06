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

    // Example for Adding to 2 debit card
    CreditCard *creditCard1 = new CreditCard(1239, 128, Issuer::RUPAY, 600, 6000, 4000);
    CreditCard *creditCard2 = new CreditCard(1240, 129, Issuer::RUPAY, 700, 7000, 5000);
    std::cout << "Adding to 2 debit card: " << *creditCard1 + *creditCard2 << "\n";
    FreeMemory(cards);
}