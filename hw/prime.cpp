#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int x);
bool isfactor(int a, int b);

// program that lists all the prime numbers between 50 and 100
int main()
{

	cout << "The prime numbers between 50 and 100 are: ";
	for (int i = 50; i <= 100; i++)
	{
		if (isprime (i) == false)
			continue;
		else
			cout << i << ", ";
	}
		
}

bool isprime(int x)
{
	// function that checks if x is prime using the isfactor function
	for (int i = 2; i <= sqrt(x); i++){
		if (isfactor(x,i) == true){
			return false;
		}
	}
	return true;
}
			

bool isfactor(int a, int b)
{
	// function that checks if b is a factor of a
	if (a % b == 0)
		return true;
	else
		return false;
}