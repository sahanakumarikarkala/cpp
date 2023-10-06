#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Card.h"
#define SIZE 5
void createObjects(Card* cards[SIZE]);

Card** getCardByIssuer(Card* cards[SIZE], Issuer issuer);

Card* getCardByNumber(Card* cards[SIZE], int number);

int getHighestAnnualCharge(Card* cards[SIZE]);

void FreeMemory(Card* cards[SIZE]);

#endif // FUNCTIONALITIES_H
