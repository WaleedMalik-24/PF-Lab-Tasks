#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;
    while (true) {
        cout << "\nMenu Options:" << endl;
        cout << "1. Display Greeting" << endl;
        cout << "2. Add Two Numbers" << endl;
        cout << "3. Subtract Two Numbers" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Hello, welcome to the menu-driven program!" << endl;
                break;
            case 2:
                cout << "Enter two numbers to add: ";
                cin >> num1 >> num2;
                cout << "The sum is: " << num1 + num2 << endl;
                break;
            case 3:
                cout << "Enter two numbers to subtract: ";
                cin >> num1 >> num2;
                cout << "The result is: " << num1 - num2 << endl;
                break;
            case 4:
                cout << "Exiting the program. Goodbye!" << endl;
                return 0; 
            default:
                cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
        }
    }

    return 0;
}

