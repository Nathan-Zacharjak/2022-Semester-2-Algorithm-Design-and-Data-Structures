#include "Node.h"

using namespace std;

Node::Node(){
    data = 0;
    next = nullptr;
}

int Node::getData(){
    return data;
}

void Node::setData(int _data){
    data = _data;
}

Node* Node::getNext(){
    return next;
}

void Node::setNext(Node* _next){
    next = _next;
}