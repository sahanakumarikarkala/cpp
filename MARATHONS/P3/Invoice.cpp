#include "Invoice.h"

Invoice::Invoice(std::string invoiceNumber, InvoiceType invoiceType, int invoiceItems)
: _invoiceNumber(invoiceNumber), _invoiceType(invoiceType), _invoiceItems(invoiceItems)
{
}
std::ostream &operator<<(std::ostream &os, const Invoice &rhs) {
    os << "invoiceNumber: " << rhs._invoiceNumber
       << " invoiceType: " <<DisplayEnum(rhs._invoiceType)
       << " invoiceItems: " << rhs._invoiceItems;
    return os;
}

std::string DisplayEnum(InvoiceType type)
{
    if(type == InvoiceType::E_BILL){
        return "E_BILL";
    }
    else if(type == InvoiceType::PAPER_SLIP){
        return "PAPER_SLIP";
    }
    else{
        return "SMS_GENERATED";
    }
}
