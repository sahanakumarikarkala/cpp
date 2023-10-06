#include "Employee.h"

Employee::Employee(std::string id, std::string name, float salary, Department dept, Project *project)
:_id(id),_name(name),_salary(salary),_dept(dept),_project(project)
{
}
std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _salary: " << rhs._salary
       << " _dept: " << DisplayEnum(rhs._dept)
       << " _project: " << rhs._project; //take *
    return os;
}

std::string DisplayEnum(const Department value)
{
    if(value==Department::DEVELOPMENT)
    {
        return "development";
    }else if(value==Department::INTEGRATION)
    {
        return "integraton";
    }else{
        return "testing";
    }
}
