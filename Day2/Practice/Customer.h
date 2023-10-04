#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include "CustomerType.h"
class Customer
{
private:
    int _customer_id;
    std::string _customer_name;
    CustomerType _customer_type;
    float _customer_store_credits;

public:
    Customer(int customerId, std::string customerName, CustomerType type , float CustomerStoreCredits);
    Customer(const Customer &obj) = default;
    ~Customer() {}

    int customerId() const { return _customer_id; }

    std::string customerName() const { return _customer_name; }

 
    float customerStoreCredits() const { return _customer_store_credits; }
    void setCustomerStoreCredits(float customer_store_credits) { _customer_store_credits = customer_store_credits; }

    CustomerType customerType() const { return _customer_type; }

   
};

#endif // CUSTOMER_H
