//
// Created by Nevo Agmon on 01/03/2018.
//

#include "Parser.h"
#include "Hasher.h"

int main(){
    //create parser and get parameters for class.
    Parser parser;

    //build the class from the parser. //TODO: update name
    Hasher hash(parser.getParameters());

    //TODO: do_somthing

    //get results. //TODO: update name.
    parser.printResult(hash.getResult());

    return 0;
}

