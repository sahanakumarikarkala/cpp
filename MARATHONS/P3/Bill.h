#ifndef BILL_H
#define BILL_H

#include "Invoice.h"
#include <iostream>
class Bill
{
private:
    float _billAmount;
    float _billTaxAmount;
    Invoice _billAssociatedInvoice;
public:

    Bill(float billAmount, float billTaxAmount, Invoice billAssociatedInvoice);
    Bill(const Bill &) = default;
    virtual ~Bill() {
        std::cout<<"Bill Destructor Called()\n";
    }

    float getBillAmount() const { return _billAmount; }

    float getBillTaxAmount() const { return _billTaxAmount; }

    Invoice getBillAssociatedInvoice() const { return _billAssociatedInvoice; }

    friend std::ostream &operator<<(std::ostream &os, const Bill &rhs);

    
};

#endif // BILL_H
