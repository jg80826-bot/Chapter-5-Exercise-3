#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double speed;
    int hours;

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;

    while (speed < 0) {
        cout << "Speed cannot be negative. Please enter a valid speed: ";
        cin >> speed;
    }

    cout << "How many hours has it traveled? ";
    cin >> hours;

    while (hours < 1) {
        cout << "Hours must be 1 or greater. Please enter a valid number of hours: ";
        cin >> hours;
    }

    cout << endl;
    cout << left << setw(8) << "Hour" << "Miles Traveled" << endl;
    cout << "--------------------------------" << endl;

    for (int i = 1; i <= hours; i++) {
        double distance = speed * i;
        cout << left << setw(8) << i << distance << endl;
    }

    return 0;
}