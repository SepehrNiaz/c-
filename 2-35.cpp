#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter the three sides of the triangle (separated by spaces): ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "Equilateral triangle." << endl;
        } else if (a == b b == c a == c) {
            cout << "Isosceles triangle." << endl;
        } else {
            cout << "Scalene triangle." << endl;
        }
    } else {
        cout << "The sides cannot form a triangle." << endl;
    }

    return 0;
}