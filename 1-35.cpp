#include <iostream>
using namespace std;

int main() {
    int totalSeconds, hours, minutes, seconds;

    cout << "Enter the time in seconds: ";
    cin >> totalSeconds;

    hours = totalSeconds / 3600;
    totalSeconds %= 3600;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    cout << "The time consists of " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds." << endl;

    return 0;
}