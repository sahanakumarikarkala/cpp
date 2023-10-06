#ifndef CREDITCARD_H
#define CREDITCARD_H

#include "Card.h"
#include <ostream>
class CreditCard : public Card
{
private:
    float _transaction_limit;

public:
    CreditCard(int number, int cvv_number, Issuer issuer, float annual_charge, float limit, float transaction_limit);
    float CalculateTaxOnCharge() override;
    ~CreditCard()
    {
        std::cout << "Credit Card Destroyed";
    }

    float transactionLimit() const { return _transaction_limit; }

    friend std::ostream &operator<<(std::ostream &os, const CreditCard &rhs);
};

#endif // CREDITCARD_H
