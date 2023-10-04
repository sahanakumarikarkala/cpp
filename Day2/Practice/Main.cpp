#include<iostream>
#include "Customer.h"
#include "Functionalities.h"
using namespace std;

int main(){
    Customer *arr[3];
    createObjects(arr);
    cout << "Average Store Points: " << AverageStorePoints(arr) << endl;
    cout << "Customers with Store Credits between 100 and 200: " << endl;
    Customer **result = GetCustomerWithStoreCredits(arr);
    for (int i = 0; i < 3; i++)
    {
        if (result[i] != nullptr)
        {
            cout << result[i]->customerName() << endl;
        }
    }
    cout << "Customers with type VIP: " << endl;
    result = GetCustomerByType(arr, CustomerType::VIP);
    for (int i = 0; i < 3; i++)
    {
        if (result[i] != nullptr)
        {
            cout << result[i]->customerName() << endl;
        }
    }
    return 0;
}
