#ifndef REFLECTOR_H
#define REFLECTOR_H

// #include "utils/LinkedList.h"
#include "Disk.h"
#include <iostream>
#include <vector>


class Reflector : public Disk  {
    public:
        Reflector();

        char getLetter(char letter);

        ~Reflector();

        friend class EnigmaMachine;

    private:

        Disk* adjacent;

};

#endif