#ifndef CREDITCARD_H
#define CREDITCARD_H
#include "CardType.h"
#include <iostream>
class CreditCard
{
private:
    std::string _number;
    CardType _type;
    float _limit;
    int _card_cvv_number;

public:
    CreditCard(std::string number, CardType type, float limit, int card_cvv_number);
    // CreditCard(const CreditCard &other) = delete;
    ~CreditCard() {}

    std::string number() const { return _number; }

    CardType type() const { return _type; }

    float limit() const { return _limit; }

    int cardCvvNumber() const { return _card_cvv_number; }

    friend std::ostream &operator<<(std::ostream &os, const CreditCard &rhs);
    

};
    std::string DisplayCardType(CardType type);


#endif // CREDITCARD_H
