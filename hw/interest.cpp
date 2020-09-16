#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double interest_rate, principal, times_compounded, final_balance;
    cout << "Enter your current balakce: ";
    cin >> principal;
    cout << "Enter the interest rate (percentage): ";
    cin >> interest_rate;
    interest_rate = interest_rate * 0.01;
    cout << "Enter the number of times the interest is compounded: ";
    cin >> times_compounded;

    final_balance = principal * pow((1 + (interest_rate/times_compounded)), times_compounded);
    cout << "Interest rate: " << interest_rate << endl;
    cout << "Times Compounded: " << times_compounded << endl;
    cout << fixed << setprecision(2) << "Final balance: $" << final_balance;
}
