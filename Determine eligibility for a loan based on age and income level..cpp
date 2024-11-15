#include <iostream>
using namespace std;

int main() {
    int age;
    double income;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your annual income ";
    cin >> income;
    if (age >= 18 && age <= 65) {
        if (income > 100000) {
            cout << "You are eligible for the loan!" << endl;
        } else {
            cout << "Your income is below the required level for the loan." << endl;
        }
    } else {
        cout << "You do not meet the age requirement for the loan." << endl;
    }

    return 0;
}

