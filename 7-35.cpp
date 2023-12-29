#include <iostream>

using namespace std;

int calculateKhayyamPascalRowSum(int i) {
    int sum = 0;
    int coefficient = 1;

    for (int j = 0; j <= i; j++) {
        sum += coefficient;
        coefficient = coefficient * (i - j) / (j + 1);
    }

    return sum;
}

int main() {
    int i;

    // Read the row number from the user
    cout << "Enter the row number: ";
    cin >> i;

    // Calculate the sum of the row
    int result = calculateKhayyamPascalRowSum(i);

    // Print the result
    cout << "The sum of the numbers in the " << i << "-th row of the Khayyam-Pascal triangle is: " << result << endl;

    return 0;
}