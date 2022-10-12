#include "LinkedList.h"
#include "Node.h"
#include <array>
#include <iostream>

using namespace std;

void LinkedList::addFront(int newItem){
    Node* newNode = new Node;
    newNode->setData(newItem);
    newNode->setNext(head);
    head = newNode;
}

void LinkedList::addEnd(int newItem){
    Node* newNode = new Node;
    newNode->setData(newItem);

    Node* currentNode = head;
    while (currentNode->getNext() != nullptr){
        currentNode = currentNode->getNext();
    }
    
    currentNode->setNext(newNode);
}

void LinkedList::addAtPosition(int position, int newItem){
    if (position < 1){
        addFront(newItem);
        return;
    }
    
    Node* newNode = new Node;
    newNode->setData(newItem);

    Node* currentNode = head;
    for (int i = 1; i < position; i++){
        if (currentNode->getNext() == nullptr){
            break;
        }
        
        currentNode = currentNode->getNext();
    }

    Node* oldNext = currentNode->getNext();
    newNode->setNext(oldNext);
    currentNode->setNext(newNode);
}

int LinkedList::search(int item){
    Node* currentNode = head;
    int position = 1;
    while (currentNode != nullptr){
        if (currentNode->getData() == item){
            cout << position << " ";
            return position;
        }
        
        currentNode = currentNode->getNext();
        position = position + 1;
    }
    
    cout << "0 ";
    return 0; 
}

void LinkedList::deleteFront(){
    Node* oldHead = head;
    head = head->getNext();
    delete oldHead;
}

void LinkedList::deleteEnd(){
    Node* lastNode = head;
    while (lastNode->getNext() != nullptr){
        lastNode = lastNode->getNext();
    }

    Node* secondLastNode = head;
    while (secondLastNode->getNext() != lastNode){
        secondLastNode = secondLastNode->getNext();
    }

    secondLastNode->setNext(nullptr);
    delete lastNode;
}

void LinkedList::deletePosition(int position){
    if (position < 1){
        cout << "outside range";
    }

    Node* currentNode = head;
    for (int i = 1; i < position - 1; i++){
        if (currentNode->getNext() == nullptr){
            cout << "outside range";
            return;
        }
        
        currentNode = currentNode->getNext();
    }
    
    Node* deleteNode = currentNode->getNext();
    currentNode->setNext(deleteNode->getNext());
    delete deleteNode;
}