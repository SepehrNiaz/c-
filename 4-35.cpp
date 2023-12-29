#include <iostream>
#include <string>

using namespace std;

string convertToBase01(int number, int base) {
    string result = "";
    
    while (number > 0) {
        int remainder = number % base;
        result = to_string(remainder) + result;
        number = number / base;
    }
    
    return result;
}

int main() {
    int number, base;
    
    // Read the number and base from the user
    cout << "Enter the number: ";
    cin >> number;
    
    cout << "Enter the base: ";
    cin >> base;
    
    // Call the function to convert the number to base 01
    string result = convertToBase01(number, base);
    
    // Print the result
    cout << "Number in base 01: " << result << endl;
    
    return 0;
}