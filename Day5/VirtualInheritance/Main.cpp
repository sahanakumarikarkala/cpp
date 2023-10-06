#include <iostream>
#include "Director.h"
#include "Manager.h"
#include "Executive.h"
#include "Employee.h"

int main()
{
    Employee *e1 = new Director("E100", "John", 10, "New York", 10000);
    e1->CalculateTax();
    std::cout << *e1;
    delete e1;
    return 0;
}