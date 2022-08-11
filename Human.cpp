#include "Human.h"
#include <iostream>

using namespace std;

Human::Human(){
    name = "Human";
}

char Human::makeMove(){
    cout << "Enter move: ";
    cin >> move;

    return move;
}