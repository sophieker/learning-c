#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

double loan, rate, moInterestRate, years, balance, term, payment, moInterest, principal;
int numPayments, month = 1;

int main()
{

	cout << "Enter the loan amount: ";
	cin >> loan;

	cout << "Enter the annual interest rate: ";
	cin >> rate;

	cout << "Enter the number of years for the loan: ";
	cin >> years;

	moInterestRate = rate/12;
	term = pow(1 + moInterestRate, years * 12);
	payment = (loan * moInterestRate * term)/(term - 1);

	cout << "\n\nMonthly payment: " << payment << endl;

	cout << setw(6) << "Month" << setw(12) << "Interest" << setw(12) << "Principal" << setw(12) << "Balance";
	cout << endl << string(42, '-');
	balance = loan;

	for (; month <= (years * 12); month++)
		moInterest = moInterestRate * balance;
		principal = payment - moInterest;
		balance = balance - principal;

		cout << setw(6) << month << setw(12) << moInterest << setw(12) << principal << setw(12) << balance << endl;

}