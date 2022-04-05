#ifndef REVERSE_H
#define REVERSE_H
#include <iostream>
#include <string>

class Reverse
{
    private:
    int ulta=0;
    int index=0;
   
    public:
    Reverse();
    int reverseDigit(int value);
    std::string reverseString(std::string letters);
};
#endif