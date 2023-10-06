#ifndef NOMATCHINGCARDEXCEPTION_H
#define NOMATCHINGCARDEXCEPTION_H

#include <iostream>
class NoMatchingCardException : public std::exception
{
private:
    /* data */
public:
    NoMatchingCardException(/* args */) {}
    char *what()
    {
        return "No matching card found";
    }
    ~NoMatchingCardException() {}
};

#endif // NOMATCHINGCARDEXCEPTION_H
