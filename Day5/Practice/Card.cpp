#include "Card.h"
#include <iostream>
float Card::CalculateTaxOnCharge()
{
    return 0.0f;
}
Card::Card(int number, int cvv_number, Issuer issuer, float annual_charge, float limit)
    : _issuer(issuer), _annual_charge(annual_charge), _limit(limit)
{
    // Check if the number is 4 digit
    if (number < 1000 || number > 9999)
    {
        throw std::runtime_error("Card number must be 4 digit");
    }
    else{
        _number = number;
    }
    // Check if the cvv number is 3 digit
    if (cvv_number < 100 || cvv_number > 999)
    {
        throw std::runtime_error("CVV number must be 3 digit");
    }
    else{
        _cvv_number = cvv_number;
    }
}

std::ostream &operator<<(std::ostream &os, const Card &rhs)
{
    os << " _number: " << rhs._number << " _cvv_number: " << rhs._cvv_number << " _issuer: " << DisplayIssuer(rhs._issuer) << " _annual_charge: " << rhs._annual_charge << " _limit: " << rhs._limit;
    return os;
}

std::string DisplayIssuer(Issuer issuer)
{
    if (issuer == Issuer::VISA)
    {
        return "VISA";
    }
    else if (issuer == Issuer::MASTERCARD)
    {
        return "MASTERCARD";
    }
    else
    {
        return "RUPAY";
    }
}
