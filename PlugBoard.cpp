#include "PlugBoard.h"
#include <iostream>
#include <stdexcept>

PlugBoard::PlugBoard() {
    
}


void PlugBoard::addPair(char a, char b) {
    if (validPair(a, b) && (int) boardPairs.size() < 26) {
        boardPairs.insert({a, b});
        boardPairs.insert({b, a});
        usedLetters.push_back(a);
        usedLetters.push_back(b);
    } else {
        std::cout << "Invalid Pair" << a << " " << b << std::endl;
    }
}

char PlugBoard::applyPair(char a) {
    try {
        char yep = boardPairs.at(a);
            return yep;
    } catch (const std::out_of_range& err) {
            return a;
    }
}

int PlugBoard::validPair(char a, char b) {
    for (int i = 0; i < ((int) usedLetters.size()); i++) {
        if (a == usedLetters[i] || b == usedLetters[i]) {
            return 0;
        }
    }
    return 1;
}

PlugBoard::~PlugBoard() {}