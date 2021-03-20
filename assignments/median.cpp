#include <iostream>
using namespace std;

const int NUM_ELEMENTS = 10;

bool isEven(int n)
{
	if (n % 2 == 0)
		return true;
	else
		return false;
}

double findMedian(int arr[], int size)
{
	if (isEven(size) == true)
	{
		// find average of middle two numbers
		return ((arr[size/2] + arr[size/2 - 1])/2);
	}
	else
	{
		// return middle number
		return (arr[size/2]);
	}
}

int main()
{
	int arr[NUM_ELEMENTS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	double median = findMedian(arr, NUM_ELEMENTS);

	cout << "The median is " << median;
}