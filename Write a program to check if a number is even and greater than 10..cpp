#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 10) {
        if (num % 2 == 0) {
            cout << "The number is even and greater than 10." << endl;
        } else {
            cout << "The number is greater than 10 but not even." << endl;
        }
    } else {
        cout << "The number is not greater than 10." << endl;
    }

    return 0;
}

