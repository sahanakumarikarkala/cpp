#include "CreditCard.h"

CreditCard::CreditCard(std::string number, CardType type, float limit, int card_cvv_number)
    : _number(number), _type(type), _limit(limit)
{
    if(card_cvv_number>100 && card_cvv_number<999){
        _card_cvv_number = card_cvv_number;
    }
    else{
        
       throw std::runtime_error("Invalid CVV number");
    }
}

std::ostream &operator<<(std::ostream &os, const CreditCard &rhs)
{
    os << "_number: " << rhs._number
       << " _type: " << DisplayCardType(rhs._type)
       << " _limit: " << rhs._limit
       << " _card_cvv_number: " << rhs._card_cvv_number;
    return os;
}

std::string DisplayCardType(CardType type)
{
    if (type == CardType::MILES)
    {
        return "MILES";
    }
    else if (type == CardType::NEO)
    {
        return "NEO";
    }
    else
        return "SIGNATURE";
}
