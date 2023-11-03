#include <iostream>
#include <string>
using namespace std;

bool isPrimeNumber(int num);

int main() {
    // what are prime numbers
    // -> that are only divided by itself
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isPrimeNumber(number)) {
        cout << "The integer " << number << " is a Prime Number" << endl;
    } else {
        cout << "The integer " << number << " is not a Prime Number" << endl;
    }
    return 0;
}

bool isPrimeNumber(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
