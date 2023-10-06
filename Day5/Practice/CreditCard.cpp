#include "CreditCard.h"

CreditCard::CreditCard(int number, int cvv_number, Issuer issuer, float annual_charge, float limit, float transaction_limit)
    : Card(number, cvv_number, issuer, annual_charge, limit), _transaction_limit(transaction_limit)
{
}

float CreditCard::CalculateTaxOnCharge()
{
    return (limit() / 100) * annualCharge();
}

std::ostream &operator<<(std::ostream &os, const CreditCard &rhs) {
    os << static_cast<const Card &>(rhs)
       << " _transaction_limit: " << rhs._transaction_limit;
    return os;
}
