//
// Created by Nevo Agmon on 01/03/2018.
//

#include "Parser.h"

int main(){
    Parser parser;
    std::vector<string> input = parser.getParameters();
    std::cout << "print:";
    for(string line : input){
        std::cout << line << std::endl;
    }
    return 0;
}

