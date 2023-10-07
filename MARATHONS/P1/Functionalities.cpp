#include "Functionalities.h"

void createObjects(Product *a[5])
{
    a[0]=new Product("p101",ProductType::APPLIANCE,25000.0f,"Sony");
    a[1]=new Product("p101",ProductType::FMCG,50000.0f,"Sony");
    a[2]=new Product("p101",ProductType::PERFUME,75000.0f,"GUCCI");
    a[3]=new Product("p101",ProductType::FMCG,80000.0f,"Almara");
    a[4]=new Product("p101",ProductType::APPLIANCE,30000.0f,"Sony");
    for(int i=0;i<5;i++)
    {
        std::cout<<"Five objects are :\n"<<(*a[i])<<"\n";
    }
}

//calculating avg prize
float averageProductPrize(Product *a[5])
{   
    //taking total 0 initiallu
    float total=0.0f;
    for(int i=0;i<5;i++)
    { 
        //adding with each price value
        total+=(a[i])->price();
    }
    //returning total
    return total/5;
}

float productTaxamount(Product *a[5])
{  
    //taking the tax as 0.8
    float productTax=0.8f;
    //first element's price as minimum
    float min=a[0]->price();
    //initially current price is 0
    float currentprice=0.0f;
    for(int i=0;i<5;i++)
    {
       currentprice=a[i]->price();
       if(currentprice<min)
       {
        //it current price is less than mn,take min as current price 
        min=currentprice;
       }
    }
    return productTax*min;
}

float maxProductPrize(Product *a[5])
{ 
    //initially take first elemets price as max
    float max=a[0]->price();
    float currentprice=0.0f;
    for(int i=0;i<5;i++)
    { 

        currentprice=a[i]->price();
        //if max is less than current price take it as max
        if(max<currentprice)
        {
            max=currentprice;
        }
    }
    return max;
}

void freeMemory(Product *a[5])
{
    //delete all the objects
    for(int i=0;i<5;i++)
    {
        delete a[i];
    }
}
