#ifndef NOMATCHINGCARDEXCEPTION_H
#define NOMATCHINGCARDEXCEPTION_H

#include <iostream>
class NoMatchingCardException : public std::exception
{
private:
    /* data */
public:
    NoMatchingCardException(/* args */) {}
    ~NoMatchingCardException() {}
};

#endif // NOMATCHINGCARDEXCEPTION_H
