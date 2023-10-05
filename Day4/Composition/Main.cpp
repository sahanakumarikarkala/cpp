#include <iostream>
#include "Functionalities.h"
#include "Employee.h"
#include "Project.h"
#include "Department.h"
#define SIZE 3
int main(){
    Employee *emps[SIZE]={};
    // Project *projects[SIZE]={};
    CreateProjectsAndEmployees(emps);
    std::cout << "Employee with highest salary is : " << *HighestSalary(emps) << std::endl;
    std::cout << "Number of employees in Development department is : " << DepartmentByName(emps,Department::DEVELOPMENT) << std::endl;
    std::cout << "Average budget for all projects is : " << AverageBudget(emps) << std::endl;
    FreeMemory(emps);
    return 0;
}