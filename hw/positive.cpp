#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	double input_num;
	string parity;

	cout << "Please enter a number: ";
	cin >> input_num;

	parity = (input_num >= 0) ? "positive" : "negative";
	cout << "The number " << input_num << " is " << parity << " and its absolute value is " << abs(input_num);

}