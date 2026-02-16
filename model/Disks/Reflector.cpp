#include "Reflector.h"
#include <iostream>

Reflector::Reflector() {
    this->outs = {};
    char sum = 97;
    // std::cout << "meh" << std::endl;
    for (char i = 25; i >= 0; i--) {
        // Add all letters in the alphabet by ascii code
        Node node = {nullptr, nullptr};
        this->outs.push_back(node); 
        // std::cout << "meh" << std::endl;
    }
}


Reflector::~Reflector() {}
