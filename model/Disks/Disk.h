#ifndef DISK_H
#define DISK_H

#include <iostream>
#include <vector>

typedef struct Node {
    Node* next;
    Node* prev;
} Node;

class Disk {

    public:
        Disk();

        virtual char getLetter(char letter);

        ~Disk();

    protected:
        std::vector<Node> outs;

        Node findPath(Node node, bool bck);

};

#endif