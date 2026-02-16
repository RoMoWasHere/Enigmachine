#ifndef ENIGMAMACHINE_H
#define ENIGMAMACHINE_H

#include "Rotor.h"
#include "Reflector.h"


class EnigmaMachine {
    public:
        EnigmaMachine(); // Default - 3 rotors, default rotors

        // EnigmaMachine(int rotorNum); // Custom Rotor Number

        EnigmaMachine(Rotor* rotor1, Rotor* rotor2, Rotor* rotor3); // Custom Rotors

        Rotor* getRotor1();
        void setRotor1(Rotor* rotor);

        Rotor* getRotor2();
        void setRotor2(Rotor* rotor);

        Rotor* getRotor3();
        void setRotor3(Rotor* rotor);

        ~EnigmaMachine();

    private:

        int ticks;

        Rotor* rotor1;
        Rotor* rotor2;
        Rotor* rotor3;

        Reflector reflector;

        void tick();

};

#endif