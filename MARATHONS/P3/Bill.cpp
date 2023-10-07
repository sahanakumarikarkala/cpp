#include "Bill.h"
#include<iostream>
Bill::Bill(float billAmount, float billTaxAmount, Invoice billAssociatedInvoice)
: _billAmount(billAmount),_billAssociatedInvoice(billAssociatedInvoice)
{
    if(billTaxAmount<billAmount){
        this->_billTaxAmount = billTaxAmount;
    }
    else{
        throw std::runtime_error("Bill Tax Amount cannot be greater than bill Amount");
    }
}
std::ostream &operator<<(std::ostream &os, const Bill &rhs) {
    os << "billAmount: " << rhs._billAmount
       << " billTaxAmount: " << rhs._billTaxAmount
       << " billAssociatedInvoice: " << rhs._billAssociatedInvoice;
    return os;
}
