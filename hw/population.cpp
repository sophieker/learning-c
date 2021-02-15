#include <iostream>
using namespace std;

int main()
{
	int population, days;
	double pop_increase;

	cout << "Enter the starting population: ";
	cin >> population;

	cout << "Enter the daily population increase (%): ";
	cin >> pop_increase;

	cout << "Enter the number of days: ";
	cin >> days;

	for (int day = 1; day <= days; day++)
	{
		population += population * (0.01 * pop_increase);
		cout << "Day " << day << ": " << population << endl;
	}
}