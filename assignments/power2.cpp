#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int array[6];

	for (int index = 0; index < 6; index++)
	{
		array[index] = pow(2, index);
	}

	for (int index = 0; index < 6; index++)
	{
		cout << array[index] << " ";
	}
}