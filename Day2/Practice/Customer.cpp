#include "Customer.h"
#include "CustomerType.h"
Customer::Customer(int customerId, std::string customerName, CustomerType customerType, float CustomerStoreCredits)
 : _customer_id(customerId),_customer_name(customerName),_customer_type(customerType),_customer_store_credits(CustomerStoreCredits)
{
}