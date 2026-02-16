#include "Rotor.h"
#include <iostream>

Rotor::Rotor() {
    this->outs = {};
    this->entries = {};

    char sum = 97;
    for (char i = 0; i < 26; i++) {
        // Add all letters in the alphabet by ascii code
        this->outs.push_back((i + sum));
    }

    // Use second loop so that the first array's addresses do not change 
    // (memory is reallocated when array size grows)
    for (char i = 0; i < 26; i++) {
        this->entries.push_back(&(this->outs[i]));
    }
}

char Rotor::getLetter(char letter) {
    int val = ((int) letter) - 97;    
    char result = *(this->entries[val]);
    // this->rotate();
    return result;
}

void Rotor::rotate() {

    // std::cout << "Start" << std::endl;
    char* temp;
    char* past = this->entries[0];

    // std::cout << "Start" << std::endl;
    for (int i = 0; i < 26; i++) {
        if (i + 1 > 25) {
            this->entries[0] = past;
        } else {
            temp = this->entries[i + 1];
            this->entries[i + 1] = past;
            past = temp;
        }

        // std::cout << "Start " << i << std::endl;
    }

    // for (int i = 0; i < 26; i++) {
    //     std::cout << this->entries[i] << std::endl;
    // }

}

Rotor::~Rotor() {}