#include <iostream>

using namespace std;

int calculateSecondPower(int n) {
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += 2 * i + 1;  // Calculate the odd number and add it to the sum
    }
    
    return sum;
}

int main() {
    int n;
    
    // Read the number from the user
    cout << "Enter a natural number: ";
    cin >> n;
    
    // Calculate the second power
    int result = calculateSecondPower(n);
    
    // Print the result
    cout << "The second power of " << n << " is: " << result << endl;
    
    return 0;
}