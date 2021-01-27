#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
long long int factorial(long long int n);
long long int combination(long long int n, long long int k);
void displayTriangle(long n);

int main()
{
	int n;
	cout << "Enter the number of rows: ";
	cin >> n;
	displayTriangle(n);
}

void displayTriangle(long n)
{
	for (int row = 0; row < n; row++)
	// for each row do:
	{
		for (int i = 0; i < (n - row - 1); i++)
		// spaces before the first number
			cout << setw(3) << " ";
		for (int i = 0; i < (row + 1); i++)
		// printing the number and spaces between
			cout << setw(3) << combination(row,i) << setw(3) << " ";
		cout << endl; 
	}
}



long long int combination(long long int n, long long int k)
{
	return (factorial(n) / (factorial(k) * factorial(n-k)));
}

long long int factorial(long long int n)
// recursive function from factorial.cpp
{
	if (n > 1)
		return n * factorial(n-1);
	else
		return 1;
}

