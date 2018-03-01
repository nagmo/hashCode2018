//
// Created by Nevo Agmon on 01/03/2018.
//

#include "Hasher.h"
using std::stoi;
Hasher::Hasher(const std::vector<string> data) : rides(), cars(){

Hasher::Hasher(const std::vector<std::string>) {

    auto mainData = split(data[0]);
    r = stoi(mainData[0]);
    c = stoi(mainData[1]);
    bonus = stoi(mainData[4]);
    steps = stoi(mainData[5]);
    for(int i = 1; i < data.size(); i++){
        rides.emplace_back(Ride(data[1]));
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
