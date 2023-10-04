#include "Functionalities.h"

void createObjects(Customer *arr[3])
{
    arr[0] = new Customer(1, "John", CustomerType::REGULAR, 100);
    arr[1] = new Customer(2, "Mary", CustomerType::PREMIUM, 150);
    arr[2] = new Customer(3, "Mike", CustomerType::VIP, 220);
}

float AverageStorePoints(Customer *arr[3])
{
    int sum = 0.0f;
    for (int i = 0; i < 3; i++)
    {
        sum += arr[i]->customerStoreCredits();
    }
    return sum/3;
}

Customer **GetCustomerByType(Customer *arr[3], CustomerType type)
{
    Customer **result = new Customer *[3];
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i]->customerType() == type)
        {
            result[count] = arr[i];
            count++;
        }
    }
    return result;
}

Customer **GetCustomerWithStoreCredits(Customer *arr[3])
{
//    store credits between 100 and 200 return those customers
    Customer **result = new Customer *[3];
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i]->customerStoreCredits() >= 100 && arr[i]->customerStoreCredits() <= 200)
        {
            result[count] = arr[i];
            count++;
        }
    }
    return result;
}
