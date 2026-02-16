#include "Disk.h"
#include <iostream>
#include <vector>
#include "Reflector.h"


Reflector::Reflector() {
    
    this->outs = {};
    this->entries = {};

    char sum = 97;
    for (char i = 0; i < 26; i++) {
        // Add all letters in the alphabet by ascii code
        this->outs.push_back((i + sum));
    }

    std::cout << "So far \n";

    // Use second loop so that the first array's addresses do not change 
    // (memory is reallocated when array size grows)
    for (char i = 25; i >= 0; i--) {
        this->entries.push_back(&(this->outs[i]));
    }
}

char Reflector::getLetter(char letter) {
    int val = ((int) letter) - 97;    
    char result = *(this->entries[val]);
    return result;
}


Reflector::~Reflector() {}
