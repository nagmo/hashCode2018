//
// Created by Nevo Agmon on 01/03/2018.
//

#ifndef HASHCODE2018_RIDE_H
#define HASHCODE2018_RIDE_H

#include "utility.h"

class Ride {
public:

    Ride() = delete;

    ~Ride() = default;

    explicit Ride(const string parameters);

    const std::vector<int> &getStart() const;

    const std::vector<int> &getEnd() const;

    int getValue() const;

    int getMin_start() const;

    int getMax_end() const;

private:
    std::vector<int> start;
    std::vector<int> end;
    int value;
    int min_start;
    int max_end;
};


#endif //HASHCODE2018_RIDE_H
