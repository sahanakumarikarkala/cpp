#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
class Employee
{
private:
    std::string _id;
    std::string name;

public:
    Employee(std::string id, std::string name) 
     : _id(id), name(name){};
    virtual void CalculateTax() = 0;
    virtual ~Employee() {
        std::cout<<"Employee Destroyed\n";
    }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
    
};

inline std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << "_id: " << rhs._id
       << " name: " << rhs.name;
    return os;
}

#endif // EMPLOYEE_H
