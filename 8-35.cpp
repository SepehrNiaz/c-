#include <iostream>

using namespace std;

double calculateSeriesSum(int n) {
    double sum = 0;
    double term = 1;
    
    for (int i = 1; i <= n; i++) {
        sum += term;
        term *= -1.0 / i;
    }
    
    return sum;
}

int main() {
    int n;
    
    // Read the number of sentences from the user
    cout << "Enter the number of sentences: ";
    cin >> n;
    
    // Calculate the sum of the series
    double result = calculateSeriesSum(n);
    
    // Print the result
    cout << "The sum of the series is: " << result << endl;
    
    return 0;
}