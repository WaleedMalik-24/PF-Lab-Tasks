#include <iostream>
using namespace std;

int main() {
    int num;
    
    // Get the integer input from the user
    cout << "Enter an integer: ";
    cin >> num;
    
    // Classify the integer
    if (num > 0) {
        cout << "The number is positive." << endl;
    } else if (num < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}

