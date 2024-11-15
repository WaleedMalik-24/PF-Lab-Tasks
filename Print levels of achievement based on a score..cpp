#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter the score (0-100): ";
    cin >> score;
    if (score >= 90 && score <= 100) {
        cout << "Achievement Level: Excellent" << endl;
    } else if (score >= 75 && score < 90) {
        cout << "Achievement Level: Good" << endl;
    } else if (score >= 50 && score < 75) {
        cout << "Achievement Level: Average" << endl;
    } else if (score >= 0 && score < 50) {
        cout << "Achievement Level: Poor" << endl;
    } else {
        cout << "Invalid score! Please enter a value between 0 and 100." << endl; 
    }

    return 0;
}

