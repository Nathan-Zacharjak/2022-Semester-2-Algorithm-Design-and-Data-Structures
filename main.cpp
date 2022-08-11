#include <iostream>
#include <array>
#include "Player.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "Tournament.h"

using namespace std;

int main(int argc, char const *argv[]){
    Avalanche* Avalanche1 = new Avalanche;
    Bureaucrat* Bureaucrat1 = new Bureaucrat;
    Bureaucrat* Bureaucrat2 = new Bureaucrat;
    Toolbox* Toolbox1 = new Toolbox;
    Toolbox* Toolbox2 = new Toolbox;
    Crescendo* Crescendo1 = new Crescendo;
    Crescendo* Crescendo2 = new Crescendo;
    FistfullODollars* FistfullODollars1 = new FistfullODollars;
    Tournament* Tournament1 = new Tournament;

    array<Player*,8> competitors = {Avalanche1,Bureaucrat1,Bureaucrat2,Toolbox1,Toolbox2,Crescendo1,Crescendo2,FistfullODollars1};

    cout << Tournament1->run(competitors)->getName() << endl;

    return 0;
}
