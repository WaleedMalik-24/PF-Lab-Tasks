 #include <iostream>
using namespace std;

int main() {
    int hour;

    // Get the hour from the user (0-24)
    cout << "Enter the hour of the day (0-24): ";
    cin >> hour;

    // Check the time of day based on the hour
    if (hour >= 0 && hour < 6) {
        cout << "Night" << endl;
    } else if (hour >= 6 && hour < 12) {
        cout << "Morning" << endl;
    } else if (hour >= 12 && hour < 18) {
        cout << "Afternoon" << endl;
    } else if (hour >= 18 && hour < 22) {
        cout << "Evening" << endl;
    } else if (hour >= 22 && hour <= 24) {
        cout << "Night" << endl;
    } else {
        cout << "Invalid input! Please enter an hour between 0 and 24." << endl;
    }

    return 0;
}

