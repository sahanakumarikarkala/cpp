#include "Functionalities.h"

int main()
{
    Customer *customers[SIZE];
    try
    {
        createObjects(customers);
        std::cout << "Customer with minimum limit: " << GetNumberOfMinimumLimit(customers) << "\n";
        std::cout << "Customer type with id C102: " << DisplayCustomerType(GetCustomerTypeUsingId(customers, "C102")) << "\n";
        std::cout << "Customer with SIGNATURE card type: ";
        if (GetCustomerCardType(customers))
        {
            std::cout << "Yes\n";
        }
        else
        {
            std::cout << "No\n";
        }
        std::cout << "Credit cards with NEO card type: "
                  << "\n";
        CreditCard **credit_cards = GetCreditCardsCardType(customers, CardType::SIGNATURE);
        for (int i = 0; i < SIZE; i++)
        {
            if (credit_cards[i] != nullptr)
            {
                std::cout << *credit_cards[i] << "\n";
            }
        }
        FreeMemory(customers);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}