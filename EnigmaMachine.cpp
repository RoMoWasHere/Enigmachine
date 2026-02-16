#include "EnigmaMachine.h"



EnigmaMachine::EnigmaMachine() {
    this->rotor1 = new Rotor();
    this->rotor2 = new Rotor();
    this->rotor3 = new Rotor();
    this->reflector = Reflector();

    this->rotor1->next = (this->rotor2);
    this->rotor2->next = (this->rotor3);
    this->rotor3->next = &(this->reflector);

    this->reflector.adjacent = (this->rotor3);
    this->rotor3->prev = (this->rotor2);
    this->rotor2->prev = (this->rotor1);
    this->rotor1->prev = nullptr;
}


Rotor* EnigmaMachine::getRotor1() {
    return rotor1;
}
void EnigmaMachine::setRotor1(Rotor* rotor) {
    this->rotor1 = rotor;
}

Rotor* EnigmaMachine::getRotor2() {
    return rotor2;
}
void EnigmaMachine::setRotor2(Rotor* rotor) {
    this->rotor2 = rotor;
}

Rotor* EnigmaMachine::getRotor3() {
    return rotor3;
}
void EnigmaMachine::setRotor3(Rotor* rotor) {
    this->rotor3 = rotor;
}
    

void EnigmaMachine::tick() {
    this->ticks = ticks + 1;

    rotor1->rotate();

    if (ticks%25 == 0) {
        rotor2->rotate();
    }
}