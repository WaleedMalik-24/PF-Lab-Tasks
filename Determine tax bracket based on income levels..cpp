#include <iostream>
using namespace std;

int main() {
    double income;
    cout << "Enter your annual income : ?";
    cin >> income;
      if (income <= 250000) {
        cout << "Tax Bracket: No tax (0%)" << endl;
    } else if (income > 250000 && income <= 500000) {
        cout << "Tax Bracket: 5% tax" << endl;
    } else if (income > 500000 && income <= 1000000) {
        cout << "Tax Bracket: 20% tax" << endl;
    } else if (income > 1000000) {
        cout << "Tax Bracket: 30% tax" << endl;
    } else {
        cout << "Invalid income!" << endl; 
    }

    return 0;
}

