#include <iostream>
#include <string>

#include "Convert.h"

using namespace std;

int main(){
    Convert convert1;
    string input = "* - 5 6 7";
    // getline(cin, input);
    // convert1.calculatePrefix(input);
    cout << convert1.toInfix(input) << " = " << convert1.calculatePrefix(input) << endl;


    return 0;
}
