//
// Created by Nevo Agmon on 01/03/2018.
//

#include "Hasher.h"
#include "Ride.h"
#include "Car.h"

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

Ride Hasher::nextride(int startX, int startY, int startT, bool *exists, int *endtime){
    int time_skew;
    bool firstrun=true;
    int p;
    bool poss=true;
    int bestride=-1;
    auto toret;
    for(auto it: rides){
        if(firstrun){
            p=profitForRide(it,startX,startY,startT,&poss,&time_skew);
            if(poss) {
                firstrun=false;
                bestride=it.getRideid();
                toret=it;
                *endtime = (startT+time_skew);
            }
        }
        int tmp=profitForRide(it,startX,startY,startT,&poss,&time_skew);
        if(poss&&tmp>p) {
            p=tmp;
            bestride=it.getRideid();
            toret=it;
            *endtime = (startT+time_skew);
        }
    }
    rides.erase(toret);
    if(poss==true){
        *exists=false;
        return nullptr;
    }
    return toret;

}

Car newchain(){
    Car car;
    bool possible=true;
    Ride nxt=nextride(0, 0, 0,&possible);
    int t=0;
    while(possible){
        car.addRide(nxt);
        car.profit+=nxt.getValue()+nxt.getBonus();
        nxt=nextride(nxt.getEndX(),nxt.getEndY(),&t);
    }
    return car;
};