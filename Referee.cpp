#include "Referee.h"
#include "Human.h"
#include "Computer.h"

using namespace std;

Referee::Referee(){

}

char Referee::refGame(Human player1, Computer player2){
    char ply1Move = player1.makeMove();
    char ply2Move = player2.makeMove();

    if (ply1Move == ply2Move){
        return 'T';
    }else if (ply1Move == 'R'){
        if (ply2Move == 'S'){
            return 'W';
        }else{
            return 'L';
        }
    }else if (ply1Move == 'P'){
        if (ply2Move == 'S'){
            return 'L';
        }else{
            return 'W';
        }
    }else if (ply1Move == 'S'){
        if (ply2Move == 'P'){
            return 'W';
        }else{
            return 'L';
        }
    }

    return 'E';
}