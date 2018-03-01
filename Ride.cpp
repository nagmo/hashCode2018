//
// Created by Nevo Agmon on 01/03/2018.
//

#include "Ride.h"


Ride::Ride(const string parameters) {

}

const std::vector<int> &Ride::getStart() const {
    return start;
}

const std::vector<int> &Ride::getEnd() const {
    return end;
}

int Ride::getValue() const {
    return value;
}

int Ride::getMin_start() const {
    return min_start;
}

int Ride::getMax_end() const {
    return max_end;
}




