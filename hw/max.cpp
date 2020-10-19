#include <iostream>
#include <string>
using namespace std;

int main()
{
	int int1, int2, max;

	cout << "Enter the first integer: ";
	cin >> int1;
	cout << "Enter the second integer: ";
	cin >> int2;

	if (int1 == int2)
		cout << "The two numbers " << int1 << " and " << int2 << " are equal";

	else if (int1 > int2)
		cout << "The maximum number between " << int1 << " and " << int2 << " is " << int1;

	else 
		cout << "The maximum number between " << int1 << " and " << int2 << " is " << int2;
	
}