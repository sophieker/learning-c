#include <iostream>
using namespace std;

bool isEven(int n)
{
	if (n % 2 == 0)
		return true;
	else
		return false;
}

void printArray(int *arr, int size)
{
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *(arr+i) << " ";
	}
	cout << endl;
}

void swap(int index1, int index2, int arr[])
{
	int temp = arr[index1];
	arr[index1] = arr[index2];
	arr[index2] = temp;
}

double average(int *arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum+= arr[i];
	}
	return (sum/double(size));
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


double median(int *arr, int size)
{
	if ((size % 2) == 0) // even
	{
		return ((*(arr + (size/2)) + *(arr + (size/2 - 1))) / 2.0); // this statement has some issue
	}
	else
		return (*(arr + (size/2)));
}


void insertionSort(int arr[], int size) // for finding the mode
{
	int indexSorted = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = indexSorted; j > 0; j--)
		{
			if (arr[j] < arr[j-1])
			{
				swap(j, j-1, arr);
			}
		}
		indexSorted++;
	}
}

int mode(int *arr, int size)
{
	insertionSort(arr, size);

	int currentMode = *(arr);
	int currentModeCount = 0;
	int currentIndexCount = 0;

	bool setAMode = false;

	for (int i = 1; i < size; i++)
	{
		if (*(arr + i) == *(arr + i - 1))
			currentIndexCount++;
		else
			currentIndexCount = 0;

		if (currentIndexCount >= currentModeCount)
		{
			currentMode = *(arr + i);
			currentModeCount = currentIndexCount;
			setAMode = true;
		}
	}

	return currentMode;
}

int main()
{
	int numStudents;

	cout << "Enter the number of students: ";
	cin >> numStudents;

	int *arr = new int[numStudents];
	cout << "Enter the number of movies watched by each student seperated with a space: ";
	for (int i = 0; i < numStudents; i++)
	{
		cin >> *(arr + i);
	}
	cout << endl << "The mean is " << average(arr, numStudents) << endl;
	cout << "The median is " << median(arr, numStudents) << endl;
	cout << "The mode is " << mode(arr, numStudents) << endl;

}