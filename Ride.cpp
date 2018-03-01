//
// Created by Nevo Agmon on 01/03/2018.
//

#include "Ride.h"
#include "Parser.h"


Ride::Ride(string parameters) {
    Parser parser;
    std::vector<string> params = parser.split(parameters);
    for( auto i=0; i <= params.size(); i++){
        auto param = stoi(params[i]);
        switch(i){
            case 0:
            case 1: start.push_back(param);
        }
    }
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




