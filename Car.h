//
// Created by yshildan on 3/1/2018.
//

#ifndef HASHCODE2018_CAR_H
#define HASHCODE2018_CAR_H

#include "utility.h"
#include "Ride.h"
class Ride;
using std::vector;

class Car {
public:
    Car();
    int getFreeX();
    int getFreeY();
    int getFreeStep();
    void addRide(Ride&);


private:
    int freeX;
    int freeY;
    int freeStep;
    vector<Ride> rides;
};


#endif //HASHCODE2018_CAR_H
