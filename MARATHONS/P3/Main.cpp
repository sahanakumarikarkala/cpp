#include "Functionalities.h"
#include <iostream>

int main()
{
    std::cout << "Create Objects.....\n";
    Bill *a[SIZE];
    Bill *exceptionBill[SIZE]={nullptr};
    try
    {
        createBills(a);

        std::cout << "Get Invoice Number of Highest Bill Amount.....";
        std::cout <<GetInvoiceNumbers(a) << "\n";
        std::cout << "Get Bill Amount with Invoice Number.....";

        std::cout << GetBillAmountWithInvoiceNumber(a, "INV002") << "\n";
        std::cout << "Get Invoices with Bill Amount.....\n";
        Invoice **invoices = GetInvoicesWithBillAmount(a, 2000);
        for (int i = 0; i < SIZE; i++)
        {
            if (invoices[i] != nullptr)
            {
                std::cout << *invoices[i] << "\n";
            }
        }
        std::cout << "Maximum Bill Amount.....\n";
        std::cout << MaximumbillAmount(a) << "\n";
        std::cout << "Minimum Bill Amount.....\n";
        std::cout << MinimumbillAmount(a) << "\n";
        std::cout << "Free Invoices.....\n";
        FreeInvoices(a);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}