//
// Created by Nevo Agmon on 01/03/2018.
//

#ifndef HASHCODE2018_RIDE_H
#define HASHCODE2018_RIDE_H

#include "utility.h"

class Ride {
public:
    int getBonus() const;

    int getStartX() const;

    void setStartX(int startX);

    int getEndX() const;

    void setEndX(int endX);

    int getStartY() const;

    void setStartY(int startY);

    int getEndY() const;

    void setEndY(int endY);

    Ride() = delete;

    ~Ride() = default;

    explicit Ride(const string parameters);

    const std::vector<int> &getStart() const;

    const std::vector<int> &getEnd() const;

    int getValue() const;

    int getMin_start() const;

    int getMax_end() const;

    bool isBonusOn() const;

    void setBonusOn(bool bonusOn);

private:
    int startX;
    int endX;
    int startY;
    int endY;
    int Bonus;
    bool bonusOn;
    int value;
    int min_start;
    int max_end;
};


#endif //HASHCODE2018_RIDE_H
