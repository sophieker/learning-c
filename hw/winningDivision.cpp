#include <iostream>
#include <cstring>
using namespace std;

double getSales(string divisionName)
{
	double sales; 
	cout << "Enter the quarterly sales figure for the " << divisionName << " division: ";
	cin >> sales;
	while (sales < 0)
	{
		cout << "Please enter a number greater than 0: ";
		cin >> sales;
	}
	return sales;
}

void findHighest(double northeast, double southeast, double northwest, double southwest)
{
	// finding max - there is probably a faster way to do this 
	double max = 0;
	if (northeast > max)
		max = northeast;
	if (southeast > max)
		max = southeast;
	if (northwest > max)
		max = northwest;
	if (southwest > max)
		max = southwest;

	// printing the highest grossing division and the corresponding sales figure
	if (max == northeast)
		cout << "The highest grossing division is Northeast, with a sales figure of " << northeast;
	else if (max == southeast)
		cout << "The highest grossing division is Southeast, with a sales figure of " << southeast;
	else if (max == northwest)
		cout << "The highest grossing division is Northwest, with a sales figure of " << northwest;
	else if (max == southwest)
		cout << "The highest grossing division is Southwest, with a sales figure of " << southwest;

}

int main()
{
	findHighest(getSales("Northeast"), getSales("Southeast"), getSales("Northwest"), getSales("Southwest"));
}