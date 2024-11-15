#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;
    int securityLevel;
    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    cout << "Enter your security level (1-5): ";
    cin >> securityLevel;
    if (username == "admin" && password == "password00") {
        if (securityLevel >= 3) {
            cout << "Access granted. Welcome, " << username << "!" << endl;
        } else {
            cout << "Access denied. Security level too low." << endl;
        }
    } else {
        cout << "Access denied. Invalid credentials." << endl;
    }

    return 0;
}

