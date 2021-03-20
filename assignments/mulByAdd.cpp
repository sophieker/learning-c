#include <iostream>
using namespace std;

int main()
{
	int user1, user2, larger_int, smaller_int, sum;

	cout << "Enter an integer: ";
	cin >> user1;
	cout << "Enter another integer: ";
	cin >> user2;

	if (user1 > user2 || user1 == user2)
	{
		larger_int = user1;
		smaller_int = user2;
	}
	else
	{
		larger_int = user2;
		smaller_int = user1;
}
	for (int i = 1; i <= smaller_int; i++)
		sum += larger_int;

	cout << sum;


}