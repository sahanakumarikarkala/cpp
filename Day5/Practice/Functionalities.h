#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Card.h"
void createObjects(Card* cards[5]);

Card** getCardByIssuer(Card* cards[5], Issuer issuer);

Card* getCardByNumber(Card* cards[5], int number);

Card* getHighestAnnualCharge(Card* cards[5]);

void FreeMemory(Card* cards[5]);

#endif // FUNCTIONALITIES_H
