#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers:" << endl;
    cin >> num1 >> num2 >> num3;

    int maxNum;

    if (num1 > num2)
        maxNum = num1;
    else
        maxNum = num2;

    if (num3 > maxNum)
        maxNum = num3;

    cout << "The largest number is: " << maxNum << endl;

    return 0;
}