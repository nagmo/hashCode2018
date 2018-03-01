//
// Created by Nevo Agmon on 01/03/2018.
//

#include "Hasher.h"

Hasher::Hasher(const std::vector<string>& data) : rides(), cars(){
    Parser p;
    auto firstRow = data[0];
    auto mainData = p.split(firstRow);
    r = stoi(mainData[0]);
    c = stoi(mainData[1]);
    bonus = stoi(mainData[4]);
    steps = stoi(mainData[5]);
    for(unsigned int i = 1; i < data.size(); i++){
        Ride r = Ride(data[i]);
        rides.push_back(r);
    }
    int carCount = stoi(mainData[2]);
    for(int i = 0; i < carCount; i++){
        cars.emplace_back(Car());
    }

}

Hasher::~Hasher() {

}

const std::vector<std::string> Hasher::getResult() {
    return std::vector<std::string>();
}
