#include <iostream>
using namespace std;

int main()
{
	int month;

	cout << "Enter a month number: ";
	cin >> month;
	if (month >=1 && month <=12){
		switch (month){
			case 6 : cout << "June\n";
					break;
			case 7 : cout << "July\n";
					break;
			case 8: cout << "August\n";
					break;
			default: cout << "The month is not in the summer.\n";
	}
}
	else 
		cout << "Your input number is out of range. \n";
	

}