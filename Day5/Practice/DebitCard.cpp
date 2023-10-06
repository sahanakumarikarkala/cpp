#include "DebitCard.h"

DebitCard::DebitCard(int number, int cvv_number, Issuer issuer, float annual_charge, float limit, CardCategory category)
    : Card(number, cvv_number, issuer, annual_charge, limit), _category(category)
{
}

float DebitCard::CalculateTaxOnCharge()
{
    /* -  An overridden CalculateTaxOnCharge implementation which return
     (_limit/100)* _annual_charge if ISSuer is VISA,
     (_limit/50)*_annual_charge If ISSuer is MASTERCARD,
     (_limit/10)*_annual_charge If ISSuer is RUPAY */

    switch (issuer())
    {
    case Issuer::VISA:
        return (limit() / 100) * annualCharge();
    case Issuer::MASTERCARD:
        return (limit() / 50) * annualCharge();
    case Issuer::RUPAY:
        return (limit() / 10) * annualCharge();
    default:
        return 0;
    }

}

std::ostream &operator<<(std::ostream &os, const DebitCard &rhs) {
    os << static_cast<const Card &>(rhs)
       << " _category: " << DisplayCardCategory(rhs._category);
    return os;
}

std::string DisplayCardCategory(CardCategory category)
{
    if (category == CardCategory::DELUXE)
    {
        return "DELUXE";
    }
    else if (category == CardCategory::PREMIUM)
    {
        return "PREMIUM";
    }
    else 
    {
        return "SIGNATURE";
    }
   
}
