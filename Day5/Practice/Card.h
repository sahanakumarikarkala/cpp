#ifndef CARD_H
#define CARD_H
#include "Issuer.h"
#include <iostream>
class Card
{
private:
    int _number;
    int _cvv_number;
    Issuer _issuer;
    float _annual_charge;
    float _limit;
    virtual float CalculateTaxOnCharge();

public:
    Card(int number, int cvv_number, Issuer issuer, float annual_charge, float limit);

    virtual ~Card()
    {
        std::cout << "Card destructor called" << std::endl;
    }

    int number() const { return _number; }

    int cvvNumber() const { return _cvv_number; }

    Issuer issuer() const { return _issuer; }

    float annualCharge() const { return _annual_charge; }

    float limit() const { return _limit; }

    friend std::ostream &operator<<(std::ostream &os, const Card &rhs);
};

std::string DisplayIssuer(Issuer issuer);

#endif // CARD_H
