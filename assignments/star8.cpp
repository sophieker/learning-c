#include <iostream>
using namespace std;

// program that displays a box of stars, with dimensions determined by the user

int main()
{
	int length, width;

	cout << "Enter the length: ";
	cin >> length;

	cout << "Enter the width: ";
	cin >> width;

	for (int i = 1; i <= width; i++)
	{
		for (int j = 1; j <= length; j++)
			cout << "*";
		cout << endl; 
	}
}