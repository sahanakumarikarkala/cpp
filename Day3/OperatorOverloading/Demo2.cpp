#include <iostream>

class Complex
{
private:
    float _real;
    float _imag;

public:
    Complex(float real, float imag)
        : _real(real), _imag(imag) {}
    ~Complex()
    {
        std::cout << "Object destroyed\n";
    }
    Complex operator+(Complex n1)
    {
        float r = this->_real + n1._real;
        float i = this->_imag + n1._imag;
        Complex temp(r, i);
        return temp;
    }
    friend std::ostream& operator<<(std::ostream& os, const Complex& c)
    {
        os << c._real << " + " << c._imag << "i";
        return os;
    }
};


int main(){
    Complex c1(1.0f, 2.0f);
    Complex c2(3.0f, 4.0f);
    Complex c3 = c1 + c2;
    std::cout << "c3 = " << c3 << std::endl;
}
