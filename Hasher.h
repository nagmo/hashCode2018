//
// Created by Nevo Agmon on 01/03/2018.
//

#ifndef HASHCODE2018_HASHER_H
#define HASHCODE2018_HASHER_H

#include "utility.h"
#include "Car.h"
#include "Ride.h"

using std::vector;

class Hasher {
public:
    explicit Hasher(const std::vector<string>);

    const std::vector<string> getResult();

private:
    vector<Ride> rides;
    vector<Car> cars;
    int bonus;
    int r;
    int c;
    int steps;
};


#endif //HASHCODE2018_HASHER_H
