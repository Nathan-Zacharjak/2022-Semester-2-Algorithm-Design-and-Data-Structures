#include <iostream>

using namespace std;

int sumDigits(long n, long acc){
    int lastDigit = n % 10;
    int nWithoutLastDigit = n / 10;

    cout << lastDigit << " " << nWithoutLastDigit << endl;

    acc = acc + lastDigit;

    if (nWithoutLastDigit == 0){
        return acc;
    }

    return sumDigits(nWithoutLastDigit, acc);
}

int sumDigits(long n){
    return sumDigits(n, 0);
}

int main(void){
    long input = 0;
    cin >> input;
    cout << sumDigits(input) << endl;

    return 0;
}
