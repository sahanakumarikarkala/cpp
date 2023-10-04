#include<iostream>

class Demo6
{
private:
    /* data */
public:
    Demo6() =default;
    void magic(){
        std::cout<<"something";
    }
    void display() const{
        std::cout<<"this works\n";
    }
    ~Demo6() {}
};

int main(){
    const Demo6 e1;//If no arguments then do not put brackets
    e1.display();
    // e1.magic();//cannot call non-const member function on a const object
}