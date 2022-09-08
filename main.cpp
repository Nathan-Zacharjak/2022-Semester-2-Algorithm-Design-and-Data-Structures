#include <iostream>
#include <string>
#include <array>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

using namespace std;

Individual* execute(Individual* indPtr, Mutator* mPtr, int k){
    string dna = mPtr->mutate(*indPtr, k).getString();
    Individual* offspring = new Individual(dna);

    return offspring;
}

int main(void){
    string input;
    getline(cin,input);

    array<string,4> inputs;
    int index = 0;
    int length = input.length();

    for (int i = 0; i < length; i++){
        char inChar = input.at(i);

        if (inChar != ' '){
            inputs.at(index).push_back(inChar);
        } else {
            index += 1;
        }
        
    }
    
    Individual ind1(inputs.at(0));
    Individual ind2(inputs.at(2));
    BitFlip flip1;
    Rearrange rearr1;

    Individual* off1 = execute(&ind1, &flip1, stoi(inputs.at(1)));
    Individual* off2 = execute(&ind2, &rearr1, stoi(inputs.at(3)));

    cout << off1->getString() << " " << off2->getString() << " " << off2->getMaxOnes() << endl;

    delete off1;
    delete off2;

    return 0;
}
