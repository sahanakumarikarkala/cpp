#include "Employee.h"
#include "Manager.h"

int main()
{
    Employee *arr[2];
    arr[0] = new Employee();
    arr[1] = new Manager();

    // Output of both will be same from parent that is Employee class applyLeave function since virtual not used in parent function
    arr[0]->applyForLeaves();
    arr[1]->applyForLeaves();

    arr[0]->payTax(); // Employee's paytax is runned
    arr[1]->payTax(); // manager's paytax is called

    // Employee version of function called because ther is no display in child class manager
    arr[0]->Display();
    arr[1]->Display();

    delete arr[0];
    delete arr[1];
}