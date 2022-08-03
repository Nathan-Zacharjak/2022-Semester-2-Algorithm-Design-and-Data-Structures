#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

using namespace std;

int main(int argc, char const *argv[]){
    Human human1;
    Computer computer1;
    Referee referee1;

    for (int i = 0; i < 3; i++){
        cout << referee1.refGame(human1,computer1) << endl;
    }

    return 0;
}
