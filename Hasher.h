//
// Created by Nevo Agmon on 01/03/2018.
//

#ifndef HASHCODE2018_HASHER_H
#define HASHCODE2018_HASHER_H

#include "utility.h"

class Hasher {
public:
    explicit Hasher(const std::vector<string>);
    ~Hasher();
    const std::vector<string> getResult();
private:

};


#endif //HASHCODE2018_HASHER_H
