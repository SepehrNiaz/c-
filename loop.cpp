#include <iostream>

using namespace std;
int main() {
    int num;
    cout << "Enter Number: ";
    cin >> num;
    for (int i = 0; i < num; i++) {
        for (int k = 0; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}