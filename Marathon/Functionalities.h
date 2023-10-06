#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <iostream>
#include "Employee.h"
#include "Project.h"

void createObjects(Employee* a1[3],Project* a2[3]);

Employee* getHighestSalary(Employee* a1[3]);

int counutOfEmployees(Employee* a1[3],Department dept);

float avgBudget(Project* a2[3]);

void freeMemory(Employee* a1[3]);

bool Checknullptr(Employee* a1[3]);


#endif // FUNCTIONALITIES_H
