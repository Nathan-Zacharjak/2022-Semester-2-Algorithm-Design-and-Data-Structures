#include "RandomComputer.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

RandomComputer::RandomComputer(){
    srand(time(NULL));
}

char RandomComputer::makeMove(){
    int randNum = rand() % 3 + 1;
    switch (randNum)
    {
    case 1:
        return 'R';
        break;
    case 2:
        return 'P';
        break;
    case 3:
        return 'S';
        break;
    
    default:
        return 'R';
        break;
    };

    return 'R';
}