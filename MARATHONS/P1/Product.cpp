#include "Product.h"

Product::Product(std::string productid, ProductType type, float price, std::string brand)
:_productid(productid),_type(type),_price(price),_brand(brand)
{
}
std::ostream &operator<<(std::ostream &os, const Product &rhs) {
    os << "_productid: " << rhs._productid
       << " _type: " << DisplayEnum(rhs._type)
       << " _price: " << rhs._price
       << " _brand: " << rhs._brand;
    return os;
}

std::string DisplayEnum(const ProductType value)
{
    if(value==ProductType::APPLIANCE)
    {
        return "Appliance";
    }else if(value==ProductType::FMCG)
    {
        return "FMCG";
    }else{
        return "Perfume";
    }
    
}
