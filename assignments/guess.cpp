#include <iostream>
#include <cstring>
using namespace std;
const int RANGE_MAX = 50;

void binaryGuess()
{
	bool guessed = false;
	int last = RANGE_MAX - 1;
	int first = 0;
	int mid = (first + last)/2;
	string user_input_guessed, user_input_range;

	while (guessed == false)
	{
		cout << "Is the number " << mid << "? "; 
		cin >> user_input_guessed;
		if (user_input_guessed == "yes")
		{
			guessed = true;
		}
		else
		{
			cout << "Is the number less than " << mid << "? ";
			cin >> user_input_range;

			if (user_input_range == "yes")
			{
				// less than guess
				last = mid - 1;
				mid = (first + last)/2;
			}
			else
			{
				// more than guess
				first = mid + 1;
				mid = (first + last)/2;
			}
		}
	}

	cout << "I have succeeded in guessing your number!" << endl;
}

int main()
{
	cout << "Think of a number in the range of 1-" << RANGE_MAX << " and I'll guess it." << endl;
	binaryGuess();
}