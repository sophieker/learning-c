#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	for (int i = 1; i <= 50; i++)
		cout << setw(7) << left << i << setw(7) << left << i*i << endl;
}