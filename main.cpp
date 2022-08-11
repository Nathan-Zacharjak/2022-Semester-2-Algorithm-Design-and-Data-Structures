#include <iostream>
// #include "Human.h"
#include "FistfullODollars.h"
// #include "Referee.h"

using namespace std;

int main(int argc, char const *argv[]){
    // Human human1;
    FistfullODollars FistfullODollars1;
    // Referee referee1;

    for (int i = 0; i < 10; i++)
    {
        cout << FistfullODollars1.makeMove() << endl;
    }

    return 0;
}
