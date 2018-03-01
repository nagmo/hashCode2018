//
// Created by Nevo Agmon on 01/03/2018.
//

#include "Ride.h"
#include "Parser.h"


Ride::Ride(string parameters) {
    Parser parser;
    std::vector<string> params = parser.split(parameters);
    for(unsigned int i=0; i <= 5; i++){
        auto param = stoi(params[i]);
        switch(i){
            case 0: startX = param;
                break;
            case 1: startY = param;
                break;
            case 2: endX = param;
                break;
            case 3: endY = param;
                break;
            case 4: min_start = param;
                break;
            case 5: max_end = param;
            default:
                break;
        }
        value = std::abs(startX-endX) + std::abs(startY-endY);
    }
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

int Ride::getRideid() const {
    return rideid;
}

int profitForRide(Ride r, int startX, int startY, int StartT, bool *possible){



    int t=r.getValue();
    int dtime=r.getMin_start()-StartT;
    int dDist=abs(startX-r.getStartX())+abs(startY-r.getStartY());
    int d=dtime>dDist? dtime: dDist;

    if(StartT+d+t>r.getMax_end()){
        *possible=false;
        return 0;
    }
    else *possible=true;

    int bonus=dtime>dDist? r.getBonus(): 0;
    if(bonus==0) r.setBonusOn(false);
    else r.setBonusOn(true);

    return t-d+bonus;

}


