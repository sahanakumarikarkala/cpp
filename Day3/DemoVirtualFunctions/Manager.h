#ifndef MANAGER_H
#define MANAGER_H
#include <iostream>
#include "Employee.h"
class Manager : public Employee
{
private:
    /* data */
public:
    Manager() = default;

    void applyForLeaves()
    {
        std::cout << "Manager takes leave when they want\n";
    }
    void payTax()
    {
        std::cout << "Manager pays 15% of salary as tax\n";
    }
    //  void Display(){
    //     std::cout<<"Manager Display Called\n";
    // }
    ~Manager() {
        std::cout <<"Manager is Destroyed\n";
    }
};

#endif // MANAGER_H
