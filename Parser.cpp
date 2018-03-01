//
// Created by Nevo Agmon on 01/03/2018.
//

#include "Parser.h"

Parser::Parser() : inputFile(INPUT_PATH, std::ifstream::in),
                   outputFile(OUTPUT_PATH, std::ifstream::out) {}

std::vector<string> Parser::getParameters() {

    //create a vector that holds each line of the file as a string.
    std::vector<string> lines;
    string line;

    //assumes the file is open.
    assert(inputFile.is_open());

    //for each line push to the vector.
    while (std::getline(inputFile, line))
    {
        lines.push_back(line);
    }
    return lines;
}

void Parser::printResult(const std::vector<string> result) {

    for( const auto &line : result){
        outputFile << line << std::endl;
    }
}

std::vector<string> Parser::split(string s) {
    std::vector<string> tokens;
    size_t pos = 0;
    string token;
    string delim = " ";
    while ((pos = s.find(delim)) != string::npos) {
        token = s.substr(0, pos);
        tokens.push_back(token);
        s.erase(0, pos + delim.length());
    }
    token = s.substr(0, pos);
    tokens.push_back(token);
    return tokens;
}