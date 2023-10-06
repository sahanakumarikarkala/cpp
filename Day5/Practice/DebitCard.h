#ifndef DEBITCARD_H
#define DEBITCARD_H
#include "CardCategory.h"
#include "Card.h"
#include <ostream>
class DebitCard : public Card
{
private:
    CardCategory _category;
public:
    DebitCard(int number, int cvv_number, Issuer issuer, float annual_charge,float limit, CardCategory category);
    ~DebitCard() {}
    float CalculateTaxOnCharge() override;

    CardCategory category() const { return _category; }

    friend std::ostream &operator<<(std::ostream &os, const DebitCard &rhs);
    
};

std::string DisplayCardCategory(CardCategory category);

#endif // DEBITCARD_H
