#include <iostream>
using namespace std;
const int LENGTH = 6;

void printArray(int [], int size);

void swap(int arr[], int i, int j)
{
  int temp_var = arr[i];
  arr[i] = arr[j];
  arr[j] = temp_var;
}

int indexOfMinimum(int arr[], int start, int end)
{
  int minimum = arr[start];
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

void selectionSort(int arr[], int length)
{
  int startIndex = 0;
  while (startIndex < length - 1)
  {
    int indexOfMin = indexOfMinimum(arr, startIndex, (length - 1));
    swap(arr, indexOfMin, startIndex);
    startIndex = startIndex + 1;
    printArray(arr, LENGTH);
    cout << endl;
  }
}

void printArray(int arr[], int size)
{
  // for debugging
  for (int i = 0; i < LENGTH; i++)
  {
    cout << arr[i] << " ";
  }
}

int main() {
  int array[LENGTH] = {24, 1, 3, 99, 103, 66};
  selectionSort(array, LENGTH);
  cout << endl;
  printArray(array, LENGTH);
}