#include "Human.h"
#include <iostream>

using namespace std;

Human::Human(){
    
}

char Human::makeMove(){
    cout << "Enter move: ";
    cin >> move;

    return move;
}