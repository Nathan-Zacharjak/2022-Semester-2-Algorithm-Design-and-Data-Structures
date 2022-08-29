#include <iostream>

using namespace std;

float series(float i){
    if (i == 1){
        return 0.5;
    }
    return series(i-1) + i/(i+1);
}

int main(void){
    cout << series(3) << endl;

    return 0;
}
