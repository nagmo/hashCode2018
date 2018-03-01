//
// Created by Nevo Agmon on 01/03/2018.
//

#ifndef HASHCODE2018_UTILITY_H
#define HASHCODE2018_UTILITY_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>


using std::string;
using std::ifstream;
using std::ofstream;



const string INPUT_PATH = "../data.txt";
const string OUTPUT_PATH = "";


std::vector<string> split(const string &s) {
    std::vector<string> words;
    char * cstr = new char [s.length()+1];
    std::strcpy (cstr, s.c_str());
    strtok(cstr," ");

}



#endif //HASHCODE2018_UTILITY_H
