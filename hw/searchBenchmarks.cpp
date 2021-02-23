#include <iostream>
using namespace std;

const int SIZE = 21;

void linearSearch(int arr[], int size, int value)
{
	int numSearches = 0; 

	cout << "Linear Search: ";
	for (int i = 0; i < size; i++)
	{
		numSearches++;

		if (arr[i] == value)
		{
			cout << i << endl;
			cout << "Number of Searches: " << numSearches << endl;
			break;
		}
	}
}

void binarySearch(int arr[], int size, int value)
{
	int numSearches = 0;
	int left = 0, right = size - 1;
	int middle = (left + right)/2;

	cout << "Binary Search: ";
	while (right > left)
	{
		numSearches++;
		if (arr[middle] == value)
		{
			cout << middle;
			break;
		}
		else if (arr[middle] < value)
		{
			left = middle + 1;
			middle = (left + right)/2;
		}
		else
		{
			right = middle - 1;
			middle = (left + right)/2;
		}

	}
	cout << endl << "Number of Searches: " << numSearches << endl;
}

int main()
{
	int arr[SIZE] = {1, 3, 3, 5, 7, 9, 13, 16, 17, 19, 25, 29, 33, 37, 39, 40, 44, 49, 50, 50, 50};
	linearSearch(arr, SIZE, 37);
	binarySearch(arr, SIZE, 37);
}