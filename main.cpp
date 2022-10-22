#include <iostream>
#include <string>

#include "Convert.h"

using namespace std;

int main(){
    Convert convert1;
    string input;
    getline(cin, input);

    string inFix = convert1.toInfix(input);
    string calculation = convert1.calculatePrefix(input);
    
    if (inFix == "Error" || calculation == "Error"){
        cout << "Error" << endl;
    } else {
        cout << inFix << " = " << calculation << endl;
    }

    return 0;
}
