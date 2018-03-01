//
// Created by Nevo Agmon on 01/03/2018.
//

#include "Ride.h"


Ride::Ride(const string parameters) {

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

int Ride::getStartX() const {
    return startX;
}

void Ride::setStartX(int startX) {
    Ride::startX = startX;
}

int Ride::getEndX() const {
    return endX;
}

void Ride::setEndX(int endX) {
    Ride::endX = endX;
}

int Ride::getStartY() const {
    return startY;
}

void Ride::setStartY(int startY) {
    Ride::startY = startY;
}

int Ride::getEndY() const {
    return endY;
}

void Ride::setEndY(int endY) {
    Ride::endY = endY;
}

int Ride::getBonus() const {
    return Bonus;
}

bool Ride::isBonusOn() const {
    return bonusOn;
}

void Ride::setBonusOn(bool bonusOn) {
    Ride::bonusOn = bonusOn;
}

int profitForRide(Ride r, int startX, int startY, int StartT, bool *possible){



    int t=r.getValue();
    int dtime=r.getMin_start()-StartT;
    int dDist=abs(startX-r.getStartX())+abs(startY-r.getStartY());
    int d=dtime>dDist? dtime: dDist;

    int bonus=dtime>dDist? r.getBonus(): 0;
    if(bonus==0) r.setBonusOn(false);
    else r.setBonusOn(true);

    return t-d+bonus;

}


