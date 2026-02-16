#ifndef DISK_H
#define DISK_H

#include "utils/LinkedList.h"
#include "Disk.h"
#include <iostream>
#include <vector>

class Disk {

    public:
        Disk();

        virtual char getLetter(char letter);

        ~Disk();

    protected:
        std::vector<char*> entries;
        std::vector<char> outs;

};

#endif