#include "Functionalities.h"
#include "Employee.h"
#include "Project.h"

void createObjects(Employee *a1[3], Project *a2[3])
{
    //v need to store project inside Emplyye
    // a2[0]=new Project("KAP",30,8000.0F);
    // a2[1]=new Project("ADAS",30,8000.0F);
    // a2[2]=new Project("KAP",30,8000.0F);
    a1[0]=new Employee("e101","sahana",6700.0f,Department::INTEGRATION,new Project("KAP",30,8000.0F));
    a1[1]=new Employee("e102","sahana",6700.0f,Department::INTEGRATION,new Project("ADAS",30,8000.0F));
    a1[2]=new Employee("e103","sahana",6700.0f,Department::INTEGRATION,new Project("KAP",30,8000.0F));
    for(int i=0;i<3;i++)
    {
        std::cout<<"object: \n"<<*a1[i]<<"\n";
    }
}

Employee *getHighestSalary(Employee *a1[3])
{
    if(Checknullptr(a1))
    {
        throw std::runtime_error("data is empty");
    }
    float max=(a1[0])->getSalary();
    float currentsal=0.0f;
    Employee* emp=a1[0];
    for(int i=0;i<3;i++)
    {
        currentsal=a1[i]->getSalary();
        if(max<currentsal)
        {
            max=currentsal;
            emp=a1[i];
        }
    }
 return emp;
}

int counutOfEmployees(Employee *a1[3], Department dept)
{
     if(Checknullptr(a1))
    {
        throw std::runtime_error("data is empty");
    }
    int c=0;
    for(int i=0;i<3;i++)
    {
        if(dept==(a1[i]->dept()))
        {
            c++;
        }
    }
    return c;
}

float avgBudget(Employee *a1[3])
{
    float total=0.0f;
    for(int i=0;i<3;i++)
    {
        total+=(a1[i])->project()->budget();
    }
    return total/3;
}

void freeMemory(Employee *a1[3])
{
    for(int i=0;i<3;i++)
    {
        
        delete a1[i];
    }
}

bool Checknullptr(Employee *a1[3])
{
    bool flag=true;
    for(int i=0;i<3;i++)
    {
        if(a1[i]!=nullptr)
        {
            flag =false;
        }

    }
    return flag;
}
