#ifndef PROJECT_H
#define PROJECT_H
#include <iostream>

class Project
{
private:
    /* data */
    std::string _name;
    int _duration_days;
    float _budget;
public:
    Project( std::string name,
    int duration_days,
    float budget);
    ~Project() {
        
    }

    std::string name() const { return _name; }

    int durationDays() const { return _duration_days; }

    float budget() const { return _budget; }
};

#endif // PROJECT_H
