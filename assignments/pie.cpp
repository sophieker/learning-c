#include <iostream>
using namespace std;

// selection sortng algorithm
void swap(int *arr, int i, int j)
{
  int temp_var = *(arr + i);
  *(arr + i) = *(arr + j);
  *(arr + j) = temp_var;
}

int indexOfMinimum(int *arr, int start, int end)
{
  int minimum = *(arr + start);
  int index = start;
  for (int i = start; i <= end; i++) 
  {
    if ((*(arr + i)) < minimum)
    {
      minimum = *(arr + i);
      index = i;
    }
  }
  return index;
}

void selectionSort(int *arr, int length)
{
  int startIndex = 0;
  while (startIndex < length - 1)
  {
    int indexOfMin = indexOfMinimum(arr, startIndex, (length - 1));
    swap(arr, indexOfMin, startIndex);
    startIndex = startIndex + 1;
  }
}

int modeOfArray(int *arr, int size)
{
	selectionSort(arr, size);

	int currentMax = *arr;
	int currentMaxValue = *arr;
	int currentValue = *arr;
	int streakSize = 0;
	
	for (int i = 1; i < size; i++)
	{

		if (*(arr + i) == *(arr + i - 1)) // comparing to the previous value
		{
			streakSize++;
			if (streakSize > currentMax)
			{
				currentMax = streakSize;
				currentMaxValue = *(arr + i);
			}
		}
		else
		{
			streakSize = 0;
		}
	}
	return currentMaxValue; 
}

void arrInput(int *arr, int size)
{
	cout << "Enter the " << size << " values separated by a space: ";
	for (int i = 0; i < size; i++)
	{
		cin >> *(arr + i);
	}
}

int main()
{
	int array[30];
	arrInput(array, 30);
	cout << "The mode is " << modeOfArray(array, 30) << endl;
}