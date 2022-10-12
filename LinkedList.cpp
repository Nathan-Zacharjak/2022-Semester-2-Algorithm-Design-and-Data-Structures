#include "LinkedList.h"
#include "Node.h"
#include <array>
#include <iostream>
#include <limits>

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

int LinkedList::getItem(int position){
    if (position < 1){
        cout << numeric_limits<int>::max() << " ";
        return numeric_limits<int>::max();
    }

    Node* currentNode = head;
    for (int i = 1; i < position; i++){
        if (currentNode->getNext() == nullptr){
            cout << numeric_limits<int>::max() << " ";
            return numeric_limits<int>::max();
        }
        
        currentNode = currentNode->getNext();
    }

    cout << currentNode->getData();
    return currentNode->getData();
}

void LinkedList::printItems(){
    Node* currentNode = head;
    while (currentNode != nullptr){
        cout << currentNode->getData() << " ";
        currentNode = currentNode->getNext();
    }
}

LinkedList::LinkedList(){
    head = nullptr;
}

LinkedList::LinkedList(array<int, 100> list, int size){
    for (int i = size - 1; i >= 0; i--){
        addFront(list.at(i));
    }
}

LinkedList::~LinkedList(){
    Node* currentNode = head;
    while (currentNode->getNext() != nullptr){
        deleteFront();
        currentNode = head;
    }
}