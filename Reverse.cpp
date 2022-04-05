#include <iostream>
#include "Reverse.h"
#include <string>
#include <typeinfo>

Reverse::Reverse(){}

int Reverse::reverseDigit(int value)
{
    if (value==0)
    { return 0;}
    else if(value>0)
    {


        int remain=(value%10);
        ulta=remain+(ulta*10);
        reverseDigit(value/10);


    }
    else
    {return -1;}

    return ulta;
}

std::string Reverse::reverseString(std::string letters)
{

    int size=letters.size();
    if (size==1)
    {
        return letters;
    }
    else if(index<(size/2))
    {
        char var=letters[index];
        letters[index]=letters[size-index-1];
        letters[size-index-1]=var;
        index++;

        letters=reverseString(letters);
    }

    return letters;
}