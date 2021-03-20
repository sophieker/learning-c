#include <iostream>
using namespace std;

int main()
{
	double num_shares = 600,
		old_price = 21.77,
		new_price = 16.44;

	double paid = num_shares * old_price,
		recieved = num_shares * new_price;

	cout << "Amount paid: $" << paid << endl;
	cout << "Amount recieved when sold: $" << recieved << endl;
	cout << "Amount gained/lost: $" << paid -  recieved;
}