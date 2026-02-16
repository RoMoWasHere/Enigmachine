#ifndef PLUGBOARD_H
#define PLUGBOARD_H

#include <vector>
#include <map>
#include <stdlib.h>

static const int MAX_SIZE = 26;

class PlugBoard {

    public:

        PlugBoard();

        void addPair(char a, char b);

        char applyPair(char a);

        ~PlugBoard();

    private:

        std::map<char, char> boardPairs;
        std::vector<char> usedLetters;

        int validPair(char a, char b);
};

#endif