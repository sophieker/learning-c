#include <iostream>
using namespace std;

long long int factorial(long long int n)
{
	if (n > 1)
		return n * factorial(n-1);
	else
		return 1;
}

int main()
{
	long long int user_input;
	cout << "Enter a value less than 21: ";
	cin >> user_input;

	if (user_input <= 0){
		cout << "Please enter a value greater than 0. ";
	}
	else{
		for (int i = 1; i <= user_input; i++)
			cout << i << "! = " << factorial(i) << endl;
	}
}