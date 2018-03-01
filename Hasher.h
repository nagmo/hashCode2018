//
// Created by Nevo Agmon on 01/03/2018.
//

#ifndef HASHCODE2018_HASHER_H
#define HASHCODE2018_HASHER_H

#include "utility.h"
#include "Car.h"
#include "Ride.h"
#include "Parser.h"

using std::vector;

class Hasher {
public:
    explicit Hasher(const std::vector<string>);
    ~Hasher();
    const std::vector<string> getResult();
private:

    int c;
    int r;
    int bonus;
    int steps;
    vector<Ride> rides;
    vector<Car> cars;


};


#endif //HASHCODE2018_HASHER_H
