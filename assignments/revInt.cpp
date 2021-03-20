#include <iostream>
using namespace std;

void reverse(int inputNum)
{

	if (inputNum == 0)
	{
		return;
	}
	else
	{
		cout << inputNum % 10;
		return (reverse(inputNum/10));
	}

}

int main()
{
	int originalNum;
	cout << "Enter a non negative number: ";
	cin >> originalNum;

	reverse(originalNum);
}