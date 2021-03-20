#include <iostream>
using namespace std;

int main()
{
	int a, b, c, min;
	cout << "Enter 3 integers: ";
	cin >> a >> b >> c;
	min = 99999999;

	if (a<min)
		min = a;
	if (b<min)
		min = b;
	if (c<min)
		min = c;
		

	cout << "The minimum number between " << a << ", " << b << " and " << c << " is " << min;
}

