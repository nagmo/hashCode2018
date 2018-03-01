//
// Created by Nevo Agmon on 01/03/2018.
//

#include "Hasher.h"

Hasher::Hasher(const vector<string> data) {
    vector<string> mainData = split(data[0]);
    r = mainData[0];
    c = mainData[1];
    bonus = mainData[4];
    steps = mainData[5];
}


const std::vector<string> Hasher::getResult() {
    return std::vector<string>();
}
