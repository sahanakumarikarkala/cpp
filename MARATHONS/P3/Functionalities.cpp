#include "Functionalities.h"

// Function to create Objects
void createBills(Bill *bills[SIZE])
{
    bills[0] = new Bill(1000, 100, Invoice("INV001", InvoiceType::E_BILL, 100));
    bills[1] = new Bill(2000, 200, Invoice("INV002", InvoiceType::PAPER_SLIP, 200));
    bills[2] = new Bill(3000, 300, Invoice("INV003", InvoiceType::SMS_GENERATED, 300));
}

// function to get invoice number of highest Bill Amount
std::string GetInvoiceNumbers(Bill *a[SIZE])
{
    checkAllEmpty(a);

    int max = 0;
    for (int i = 1; i < SIZE; i++)
    {
        if (a[i]->getBillAmount() > a[max]->getBillAmount())
        {
            max = i;
        }
    }
    return a[max]->getBillAssociatedInvoice().getInvoiceNumber();
}

//  Function to get Bill Amount whose invoice number is given
float GetBillAmountWithInvoiceNumber(Bill *a[SIZE], std::string invoiceNumber)
{
    checkAllEmpty(a);

    for (int i = 0; i < SIZE; i++)
    {
        if (a[i]->getBillAssociatedInvoice().getInvoiceNumber() == invoiceNumber)
        {
            return a[i]->getBillAmount();
        }
    }
    throw std::runtime_error("Invoice number not found");
}

//  Which returns list of Invoices With invoice bill amount greater than given threshold bill Amount
Invoice **GetInvoicesWithBillAmount(Bill *a[SIZE], float billAmount)
{
    checkAllEmpty(a);
    Invoice **invoices = new Invoice *[SIZE];
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (a[i]->getBillAmount() >= billAmount)
        {
            invoices[count++] = new Invoice(a[i]->getBillAssociatedInvoice());
        }
    }
    if (count == 0)
    {
        throw std::runtime_error("No invoices found");
    }
    return invoices;
}

//  Free Invoices()
void FreeInvoices(Bill *a[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        delete a[i];
    }
}

//  Checks if bills are empty
void checkAllEmpty(Bill *bills[SIZE])
{
    //    If all are empty then throw exception
    for (int i = 0; i < SIZE; i++)
    {
        if (bills[i] != nullptr)
        {
            return;
        }
    }
    throw std::runtime_error("All bills are empty");
}

//  Function to get Invoice with Maximum Bill Amount
Invoice MaximumbillAmount(Bill *bills[SIZE])
{
    checkAllEmpty(bills);

    int maxIndex = 0;
    for (int i = 1; i < SIZE; i++)
    {
        if (bills[i]->getBillAmount() > bills[maxIndex]->getBillAmount())
        {
            maxIndex = i;
        }
    }
    return Invoice(bills[maxIndex]->getBillAssociatedInvoice());
}

//  Function to get Invoice with minimum Bill Amount

Invoice MinimumbillAmount(Bill *bills[SIZE])
{
    checkAllEmpty(bills);

    int minIndex = 0;
    for (int i = 1; i < SIZE; i++)
    {
        if (bills[i]->getBillAmount() < bills[minIndex]->getBillAmount())
        {
            minIndex = i;
        }
    }
    return Invoice(bills[minIndex]->getBillAssociatedInvoice());
}
