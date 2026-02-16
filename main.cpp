#include <iostream>
#include "PlugBoard.h"
#include "Reflector.h"
#include "Rotor.h"

int main() {
    int loop = 1;

    // PlugBoard pb = PlugBoard();
    // pb.addPair('a', 'e');
    // pb.addPair('i', 'o');
    // pb.addPair('r', 's');
    // pb.addPair('t', 'y');
    // pb.addPair('u', 'p');
    // pb.addPair('z', 'x');
    // pb.addPair('q', 'w');
    // pb.addPair('d', 'f');
    // pb.addPair('h', 'g');
    // pb.addPair('j', 'k');
    // pb.addPair('m', 'l');
    // pb.addPair('n', 'b');
    // pb.addPair('v', 'c');
    // pb.addPair(',', '.');

    Rotor* rt1 = new Rotor();
    Rotor* rt2 = new Rotor();
    rt2->rotate();
    rt2->rotate();
    rt2->rotate();


    Reflector* rf = new Reflector();
    PlugBoard* pb = new PlugBoard();
    pb->addPair('a', 'e');
    pb->addPair('i', 'o');
    pb->addPair('r', 's');
    pb->addPair('t', 'y');
    pb->addPair('u', 'p');
    pb->addPair('z', 'x');
    pb->addPair('q', 'w');
    pb->addPair('d', 'f');
    pb->addPair('h', 'g');
    pb->addPair('j', 'k');
    pb->addPair('m', 'l');
    pb->addPair('n', 'b');
    pb->addPair('v', 'c');
    pb->addPair(',', '.');

    while (loop) {
        char buf;
        std::cin >> buf;
        char exit = 48; // exit is 0.
        if (buf == exit) {

            break;
        } else if (buf == 49) {
            rt2->rotate();
        } else {

            // std::cout << "Plug Board: " << pb->applyPair(buf) << std::endl;
            // std::cout << "Rotor 1:" << rt1->getLetter(pb->applyPair(buf)) << std::endl;
            // std::cout << "Rotor 2: "<< rt2->getLetter(rt1->getLetter(pb->applyPair(buf))) << std::endl;
            // std::cout << "Reflector: " << rf->getLetter(rt2->getLetter(rt1->getLetter(pb->applyPair(buf)))) << std::endl;
            // std::cout << "Rotor 2: "<< rt2->getLetter(rf->getLetter(rt1->getLetter(pb->applyPair(buf)))) << std::endl;
            // std::cout << "Rotor 1:" << rt1->getLetter(rt2->getLetter(rf->getLetter(rt2->getLetter(rt1->getLetter(pb->applyPair(buf)))))) << std::endl;
            
            // std::cout << "Plug Board: " << pb->applyPair(rt1->getLetter(rt2->getLetter(rf->getLetter(rt2->getLetter(rt1->getLetter(pb->applyPair(buf))))))) << std::endl;
            
            // std::cout << "Rotor 1: " << rt1->getLetter(buf) << std::endl;
            // std::cout << "Rotor 2: " << rt2->getLetter(rt1->getLetter(buf)) << std::endl;
            // std::cout << "Reflector: " << rf->getLetter(rt2->getLetter(rt1->getLetter(buf))) << std::endl;
            // std::cout << "Rotor 2: " << rt2->getLetter(rf->getLetter(rt2->getLetter(rt1->getLetter(buf)))) << std::endl;
            std::cout << "Rotor 1: " << rt1->getLetter(rt2->getLetter(rf->getLetter(rt2->getLetter(rt1->getLetter(buf))))) << std::endl;
            
            std::cout << "----------------------------" << std::endl;
            rt1->rotate();
            
        }
    }

    // ~pb;

    std::cout << "Meh\n";

    char a = 'a';
    std::cout << a << std::endl;

    a = rf->getLetter(a);
    std::cout << a << std::endl;



    std::cout << "Rotor Stuff: " << std::endl;

    std::cout << rt1->getLetter('a') << std::endl;
    // rotor->rotate();
    std::cout << rt1->getLetter('a') << std::endl;

    std::cout << rt1->getLetter('h') << std::endl;

// 
    return 0;

}