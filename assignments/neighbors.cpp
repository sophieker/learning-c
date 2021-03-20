#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

const int SIZE = 7; 

int arr[SIZE][SIZE];

void printLarger(int arr[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if ((i > 0) || (j > 0) || (i < (SIZE - 1)) || (j < (SIZE - 1)))
				if ((arr[i][j] > arr[i+1][j+1]) && (arr[i][j] > arr[i-1][j-1]) && (arr[i][j] > arr[i+1][j]) && (arr[i][j] > arr[i][j+1]) && (arr[i][j] > arr[i-1][j]) && (arr[i][j] > arr[i][j-1]) && (arr[i][j] > arr[i-1][j+1]) && (arr[i][j] > arr[i+1][j-1]))
					cout << "row " << i << ", column " << j << ", value " << arr[i][j] << endl;
		}
	}
}

int main()
{
	srand(time(0));

	for (int r = 0; r < SIZE; r++)
	{
		for (int c = 0; c < SIZE; c++)
		{
			if ((r == 0) || (c == 0) || (r == (SIZE - 1)) || (c == (SIZE - 1)))
				arr[r][c] = -10;
			else
				arr[r][c] = rand() % 10 + 1;
		}
	}
	// printing the array
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;

	printLarger(arr);
}