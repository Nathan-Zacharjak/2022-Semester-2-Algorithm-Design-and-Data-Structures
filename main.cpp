#include <iostream>
#include "Human.h"
#include "FistfullODollars.h"
#include "Referee.h"

using namespace std;

int main(int argc, char const *argv[]){
    Human* human1 = new Human;
    FistfullODollars* fistFullODollars1 = new FistfullODollars;
    Referee* referee1 = new Referee;

    for (int i = 0; i < 4; i++)
    {
        cout << referee1->refGame(human1,fistFullODollars1) << endl;
    }

    return 0;
}
