#ifndef ROTOR_H
#define ROTOR_H

#include "Disk.h"
#include <iostream>
#include <vector>


class Rotor : public Disk {
    public:

        Rotor();

        void rotate();

        char getLetter(char letter) override;

        ~Rotor();

        friend class EnigmaMachine;

    private:
        
        Disk* prev;
        Disk* next;
        
        char getLetter(char letter, bool fwd);

};

#endif