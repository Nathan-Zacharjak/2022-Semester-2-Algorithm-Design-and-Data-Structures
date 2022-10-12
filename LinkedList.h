#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <Array>
#include "Node.h"

class LinkedList{
private:
    Node* head;
public:
    void addFront(int newItem);
    void addEnd(int newItem);
    void addAtPosition(int position, int newItem);
    int search(int item);
    void deleteFront();
    void deleteEnd();
    void deletePosition(int position);
    int getItem(int position);
    void printItems();
    LinkedList();
    LinkedList(array<int> list, int size);
    ~LinkedList();
};

#endif