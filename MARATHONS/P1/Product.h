#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include "ProductType.h"
class Product
{
private:
    /* data */
    std::string _productid;
    ProductType _type;
    float _price;
    std::string _brand;
public:
    //parameterized constructor 
    Product(std::string productid,ProductType type,float price,std::string brand) ;


    ~Product() {
        std::cout<<"Product with the id :"<<_productid<<" is destroyed\n";
    }

   //getters and setters
    std::string productid() const { return _productid; }
    void setProductid(const std::string &productid) { _productid = productid; }

    ProductType type() const { return _type; }
    void setType(const ProductType &type) { _type = type; }

    float price() const { return _price; }
    void setPrice(float price) { _price = price; }

    std::string brand() const { return _brand; }
    void setBrand(const std::string &brand) { _brand = brand; }

    friend std::ostream &operator<<(std::ostream &os, const Product &rhs);
    
};
std::string DisplayEnum(const ProductType value);
#endif // PRODUCT_H
