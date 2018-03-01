//
// Created by Nevo Agmon on 01/03/2018.
//

#include "Hasher.h"
using std::stoi;
Hasher::Hasher(const std::vector<string> data) {

    auto mainData = split(data[0]);
    r = stoi(mainData[0]);
    c = stoi(mainData[1]);
    bonus = stoi(mainData[4]);
    steps = stoi(mainData[5]);
//    rides;
//    cars;
}

Hasher::~Hasher() {

}

const std::vector<string> Hasher::getResult() {
    return std::vector<string>();
}
