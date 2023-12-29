#include <iostream>
using namespace std;

bool isPrime(int num) {
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

int main() {
    int number, sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        for (int i = 1; i < number; i++) {
            if (number % i == 0) {
                sum += i;
            }
        }

        if (sum == number && isPrime(number)) {
            cout << "The number is a whole number, positive, and equal to the sum of its positive divisors (excluding itself)." << endl;
        } else {
            cout << "The number is a whole number but does not meet the given criteria." << endl;
        }
    } else {
        cout << "The number is not a whole number." << endl;
    }

    return 0;
}