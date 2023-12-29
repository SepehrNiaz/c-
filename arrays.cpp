#include <iostream>
using namespace std;

int main() {
    int arr[6];

    cout << "Enter 6 numbers:" << endl;

    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    cout << "The array in reverse order is:" << endl;
    for (int i = 5; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}