#ifndef EFFICIENTTRUCKLOADS_H
#define TRUCKLOADS_H
#include <iostream>
#include <string>
#include <map>

class EfficientTruckloads
{
    private:
    std::map<int,int> recursiveTrucks;

    public:
    EfficientTruckloads();
    int numTrucks(int numCrates,int loadSize);
};




#endif
