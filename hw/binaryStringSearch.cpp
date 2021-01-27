#include <iostream>
#include <cstring>
using namespace std;

// selection sort algorithm with strings

void swap(string arr[], string i, string j)
{
  string temp_var = arr[i];
  arr[i] = arr[j];
  arr[j] = temp_var;
}

int indexOfMinimum(string arr[], int start, int end)
{
  string minimum = arr[start];
  int index = start;
  for (int i = start; i <= end; i++) 
  {
    if (arr[i] < minimum)
    {
      minimum = arr[i];
      index = i;
    }
  }
  return index;
}

void selectionSort(string arr[], int length)
{
  int startIndex = 0;
  while (startIndex < length - 1)
  {
    int indexOfMin = indexOfMinimum(arr, startIndex, (length - 1));
    swap(arr, indexOfMin, startIndex);
    startIndex = startIndex + 1;
  }
}

// binary search algorithm with strings

int binaryStringSearch(int arr[], size)

int main()
{
	
}