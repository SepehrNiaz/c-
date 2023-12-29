#include <iostream>

using namespace std;

void printFibonacciSequence(int n) {
    int firstTerm = 0;
    int secondTerm = 1;
    int nextTerm;

    cout << "Fibonacci Sequence: ";
    cout << firstTerm << ", " << secondTerm << ", ";

    for (int i = 3; i <= n; i++) {
        nextTerm = firstTerm + secondTerm;
        cout << nextTerm << ", ";

        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    cout << endl;
}

int main() {
    int numberOfTerms = 91;

    printFibonacciSequence(numberOfTerms);

    return 0;
}