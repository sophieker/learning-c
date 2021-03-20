#include <iostream>
using namespace std;
const int LENGTH = 7;

void printArray(int [], int size);

void swap(int arr[], int i, int j)
{
  int temp_var = arr[i];
  arr[i] = arr[j];
  arr[j] = temp_var;
}

int indexOfMaximum(int arr[], int start, int end)
{
  int maximum = arr[end];
  int index = end;
  for (int i = end; i >= start; i--) 
  {
    if (arr[i] > maximum)
    {
      maximum = arr[i];
      index = i;
    }
  }
  return index;
}

void selectionSort(int arr[], int length)
{
  int endIndex = length-1;
  while (endIndex > 0)
  {
    int indexOfMax = indexOfMaximum(arr, 0, endIndex);
    swap(arr, indexOfMax, endIndex);
    endIndex--;
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
  int array[LENGTH] = {70, 40, 5, 1, -20, 90, 2};
  selectionSort(array, LENGTH);
  cout << endl;
  printArray(array, LENGTH);
}