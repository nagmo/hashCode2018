//
// Created by yshildan on 3/1/2018.
//

#include "Car.h"

Car::Car() : freeX(0), freeY(0), freeStep(0){}

int Car::getFreeR() {
    return freeX;
}

int Car::getFreeC() {
    return freeY;
}

int Car:: getFreeStep(){
    return freeStep;
}


void Car::addRide(Ride& ride) {
    rides.push_back(ride);
    //todo update free x and y and tume
}

using Car;

Car newcar(){

}