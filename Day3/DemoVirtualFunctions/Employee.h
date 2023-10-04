#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
class Employee
{
private:
    /* data */
public:
    Employee() =default;

    void applyForLeaves(){
        std::cout<<"Employee applies for leave\n";
    }
    virtual void payTax(){
        std::cout<<"Employee pays 20% of salary as tax\n";
    }
    virtual void Display(){
        std::cout<<"Employee Display Called\n";
    }
    virtual ~Employee() {
        std::cout<<"Employee Destroyed\n";
    }

};

#endif // EMPLOYEE_H
