#include "Tournament.h"

#include <array>
#include <iostream>

#include "Player.h"
#include "Referee.h"

using namespace std;

Tournament::Tournament() {
  ply1Wins = 0;
  ply2Wins = 0;
  gameResult = 'E';
  winner = NULL;
  ply1 = NULL;
  ply2 = NULL;
}

Player* Tournament::RunRound(Player* ply1, Player* ply2) {
    for (int i = 0; i < 5; i++) {
      gameResult = ref.refGame(ply1, ply2);
    cout << gameResult << endl;
      if (gameResult == 'W') {
        ply1Wins++;
      } else if (gameResult == 'L') {
        ply2Wins++;
      }
    }

    if (ply2Wins <= ply1Wins) {
      winner = ply1;
    } else {
      winner = ply2;
    }
    cout << winner->getName() << endl;
  return winner;
}

Player* Tournament::run(array<Player*, 8> competitors) {
    cout << "Round 1 winners:" << endl;
    for (int i = 0; i < 8; i = i + 2){
        winners.at(i/2) = RunRound(competitors.at(i),competitors.at(i+1));
    }

    cout << "Round 2 winners:" << endl;
    for (int i = 0; i < 4; i = i + 2){
        winners.at(i/2) = RunRound(winners.at(i),winners.at(i+1));
    }

    cout << "Final winner:" << endl;
    return RunRound(winners.at(0),winners.at(1));
}