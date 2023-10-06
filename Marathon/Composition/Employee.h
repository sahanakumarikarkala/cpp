#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include "Department.h"
#include "Project.h"

class Employee
{
private:
    /* data */
    std::string _id;
    std::string _name;
    float _salary;
    Department _dept;
    Project* _project;
public:
    Employee(  std::string id,
    std::string name,
    float salary,
    Department dept,
    Project* project) ;
    ~Employee() {
       delete _project;
        std::cout<<"Employee with id :"<<_id<<"is destroyed";
    }

    std::string id() const { return _id; }

    std::string name() const { return _name; }

    float getSalary() const { return _salary; }

    Department dept() const { return _dept; }

    Project* project() const { return _project; }

   

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
    
};
std::string DisplayEnum(const Department value);

#endif // EMPLOYEE_H
