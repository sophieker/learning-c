#include <iostream>
using namespace std;

int power(double b, int p)
{
	if (p == 0)
		return 1;
	else
		return (b * power(b, p-1));
}

int main()
{
	int base, exponent;

	cout << "Enter two numbers: ";
	cin >> base >> exponent;

	cout << base << " to the power of " << exponent << " is: " << power(base, exponent) << endl;
}