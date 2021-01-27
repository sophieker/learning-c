#include <iostream>
using namespace std;

int main()
{
	int num, reversednum = 0, x;

	cout << "Enter an integer: ";
	cin >> num;

	while (num != 0)
	{
		x = num % 10;
		num = num/10;
		reversednum = reversednum * 10 + x;

	}

	cout << "The reversed number is " << reversednum;
}