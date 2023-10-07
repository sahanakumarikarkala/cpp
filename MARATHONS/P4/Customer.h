#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "CustomerType.h"
#include <iostream>
#include "CardType.h"
#include "CreditCard.h"
class Customer
{
private:
    std::string _name;
    std::string _id;
    CustomerType _customer_type;
    CreditCard _credit_card;

public:
    Customer(std::string name, std::string id, CustomerType customer_type, CreditCard credit_card);
    //copy constructor
    Customer(const Customer &) = default;

    ~Customer() {
        std::cout << "Customer with the id:"<<_id<<"is destroyed\n";
    }

    std::string name() const { return _name; }

    CustomerType customerType() const { return _customer_type; }

    CreditCard creditCard() const { return _credit_card; }

    std::string id() const { return _id; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);
    
};

std::string DisplayCustomerType(CustomerType type);

#endif // CUSTOMER_H
