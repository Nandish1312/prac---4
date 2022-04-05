#include <iostream>
#include <string>
#include <vector>
#include "EfficientTruckloads.h"

EfficientTruckloads::EfficientTruckloads(){}

int EfficientTruckloads::numTrucks(int numCrates,int loadSize)
{
    if (numCrates<=0 || loadSize<=0)
    {return 0;}
    
    if(numCrates<=loadSize)
    {return 1;}
    
    if(recursiveTrucks.count(numCrates)!=0)
    {
        return recursiveTrucks[numCrates];
    }
    else
    {
        recursiveTrucks[numCrates]=numTrucks(numCrates/2,loadSize)+numTrucks(numCrates-(numCrates/2),loadSize);
        return(recursiveTrucks[numCrates]);
    }
}
