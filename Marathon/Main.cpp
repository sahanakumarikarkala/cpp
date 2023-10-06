#include <iostream>
#include "Employee.h"
#include "Project.h"
#include "Functionalities.h"
int main(){
    Employee* a1[3];
    Project* a2[3];
    try{
        createObjects(a1,a2);
        std::cout<<"Highest Salary: "<<*getHighestSalary(a1)<<"\n";
        std::cout<<"count of employees :"<<counutOfEmployees(a1,Department::INTEGRATION)<<"\n";
        std::cout<<"avg budget :"<<avgBudget(a2)<<"\n";
    }catch(std::runtime_error& er){
        std::cout<<er.what()<<std::endl;
 

       
    }
      freeMemory(a1);
}

