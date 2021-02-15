#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 10;
const string SEARCH = "the";

// selection sort algorithm with strings

void swap(string arr[], int i, int j)
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

int BinaryStringSearch(string arr[], int size, string searchWord)
{
  int first = 0;
  int last = size - 1;
  int middle = (first + last)/2;

  bool found;
  while (found == false)
  {
    if (arr[middle] == searchWord)
    {
      return middle;
      found = true;
    }
    else if (searchWord < arr[middle])
    {
      last = middle - 1;
      middle = (first + last)/2;
    }
    else
    {
      first = middle + 1;
      middle = (first + last)/2;
    }
  }
  return -1;
}

void printArray(string arr[], int size)
{
  for (int i = 0; i < SIZE; i++)
  {
    cout << arr[i] << ", ";
  }
  cout << endl;
}


int main()
{
	string arr[SIZE] = {"this", "is", "the", "test", "for", "the", "binary", "string", "search", "program"};
	selectionSort(arr, SIZE);

  cout << "This is the sorted array: " << endl;
  printArray(arr, SIZE);

  cout << endl;

  cout << "This is the index of " << SEARCH << ": " << BinaryStringSearch(arr, SIZE, SEARCH) << endl;
}