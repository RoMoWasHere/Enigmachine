#include "Rotor.h"
#include <iostream>

Rotor::Rotor() {

    char sum = 97;
    for (char i = 0; i < 26; i++) {
        Node node = {nullptr, nullptr};
        // Add all letters in the alphabet by ascii code
        this->outs.push_back(node);
    }
}

char Rotor::getLetter(char letter) {
    char result;
    Node* sol = &(this->findPath(this->outs[letter], 0));
    result = (sol - &(this->outs[0])) + 97;

    return result;
}

void Rotor::rotate() {

    // std::cout << "Start" << std::endl;
    Node temp;
    Node past = (this->outs)[0];

    // std::cout << "Start" << std::endl;
    for (int i = 0; i < 26; i++) {
        if (i + 1 > 25) {
            (this->outs)[0] = past;
        } else {
            temp = (this->outs)[i + 1];
            (this->outs)[i + 1] = past;
            past = temp;
        }

        // std::cout << "Start " << i << std::endl;
    }

    // for (int i = 0; i < 26; i++) {
    //     std::cout << this->entries[i] << std::endl;
    // }

}

Rotor::~Rotor() {}