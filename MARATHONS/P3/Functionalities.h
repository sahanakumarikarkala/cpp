#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Invoice.h"
#include "Bill.h"
#include "InvoiceType.h"
#include <iostream>

#define SIZE 3
void createBills(Bill *[SIZE]);

std::string GetInvoiceNumbers(Bill *[SIZE]);

float GetBillAmountWithInvoiceNumber(Bill *[SIZE], std::string invoiceNumber);

Invoice** GetInvoicesWithBillAmount(Bill *[SIZE], float billAmount);

void FreeInvoices(Bill *[SIZE]);

void checkAllEmpty(Bill *[SIZE]);

Invoice MaximumbillAmount(Bill *bills[SIZE]);

Invoice MinimumbillAmount(Bill *bills[SIZE]);
#endif // FUNCTIONALITIES_H
