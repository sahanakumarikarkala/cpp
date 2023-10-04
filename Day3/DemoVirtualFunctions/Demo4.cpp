#include <iostream>

void Demo()
{
    int n1 = 10;
    int n2 = 20;
    // const is applied on 'int' not on 'int*'

    // ptr is a constant pointer to any integer
    int *const ptr = &n1;

    // since pointer itself is not constant , its 'content' can be chnaged,
    // so address inside ptr can be changed
    // ptr = &n2;//won't work since ptr itself is constant
    // Since int part is not constant , I can use pointer to change n1's value

    *ptr = 100; // allowed
    // n1 = 100; // this is allowed
}

int main()
{
    Demo();
}