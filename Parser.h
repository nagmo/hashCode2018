//
// Created by Nevo Agmon on 01/03/2018.
//

#ifndef HASHCODE2018_PARSER_H
#define HASHCODE2018_PARSER_H

#include "utility.h"

class Parser {
public:
    Parser();
    ~Parser();
    std::vector<string> getParameters();
    void printResult(std::vector<string> result);

private:
    ifstream inputFile;
    ofstream outputFile;
};


#endif //HASHCODE2018_PARSER_H
