#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0) {
        if (num % 2 == 0) {
            cout << "The number is positive and even." << endl;
        } else {
            cout << "The number is positive but not even." << endl;
        }
    } else {
        cout << "The number is not positive." << endl;
    }

    return 0;
}

