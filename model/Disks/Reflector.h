#ifndef REFLECTOR_H
#define REFLECTOR_H

#include "Disk.h"
#include <iostream>
#include <vector>


class Reflector : public Disk  {
    public:
        Reflector();

        char getLetter(char letter) override;

        ~Reflector();

        friend class EnigmaMachine;

    private:

        Disk* adjacent;

};

#endif