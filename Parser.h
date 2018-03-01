//
// Created by Nevo Agmon on 01/03/2018.
//

#ifndef HASHCODE2018_PARSER_H
#define HASHCODE2018_PARSER_H

#include "utility.h"

class Parser {
public:
    Parser();
    std::vector<string> getParameters();
    void printResult(const std::vector<string> result);
    std::vector<string> split(string &s);

private:
    ifstream inputFile;
    ofstream outputFile;
};


#endif //HASHCODE2018_PARSER_H
