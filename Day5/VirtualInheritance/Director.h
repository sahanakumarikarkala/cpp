#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Manager.h"
#include "Executive.h"
#include "Employee.h"
#include <ostream>
class Director : public Manager, public Executive
{
private:
    float _budget;
public:
    Director(std::string id, std::string name, int size, std::string location, float budget) 
     : Employee(id, name), Manager(id, name, size), Executive(id, name, location), _budget(budget) {};

    void CalculateTax() override{
        std::cout << "Director tax" << std::endl;
    }
    ~Director() {}

    friend std::ostream &operator<<(std::ostream &os, const Director &rhs);
    
    
};

inline std::ostream &operator<<(std::ostream &os, const Director &rhs) {
    os << static_cast<const Manager &>(rhs)
       << static_cast<const Executive &>(rhs)
       << " _budget: " << rhs._budget;
    return os;
}

#endif // DIRECTOR_H
