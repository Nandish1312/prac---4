#include <iostream>
#include <string>
#include "Truckloads.h"

Truckloads::Truckloads()
{}

int Truckloads::numTrucks(int numCrates,int loadSize)
{
    if (numCrates<=0 || loadSize<=0)
    {
        return 0;
    }
    else if(numCrates <= loadSize)
    {
        return 1;
    }
    else
    {
        return numTrucks((numCrates/2),loadSize)+numTrucks((numCrates-(numCrates/2)),loadSize);
    }
}
