#include "Disk.h"
#include <iostream>
#include <vector>

Disk::Disk() {}

char Disk::getLetter(char letter) {
    return letter;
}

Node Disk::findPath(Node node, bool bck) {
    
    Node* next = node.next;
    if (bck || next == nullptr) {
        next = node.prev;
        bck = 1;
    }

    if (next == nullptr) {
        return node;
    } else {
        return findPath(*next, bck);
    }

}

Disk::~Disk() {}
