#ifndef NOMATCHINGCARDEXCEPTION_H
#define NOMATCHINGCARDEXCEPTION_H

#include <iostream>
class NoMatchingCardException : public std::exception
{
private:
    /* data */
    std::string _msg;
public:
    NoMatchingCardException(char* msg) :_msg(msg){}
    const char* what() const throw()
    {
        return _msg.c_str();
    }
    ~NoMatchingCardException() {}


};

#endif // NOMATCHINGCARDEXCEPTION_H
