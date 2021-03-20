# include <iostream>
using namespace std;

const int SIZE = 10;

// find the number of unique elements
int numUnique(int inpArray[], int inpArraySize)
{
	int uniqueCount = 0;
	for (int i = 0; i < inpArraySize; i++)
	{
		if (inpArray[i] != inpArray[i+1])
		{
			uniqueCount++;
		}
	}
	return uniqueCount;
}


void removeDup(int inpArray[], int inpArraySize, int outArray[])
{
	int outArrayIndex = 0;
	for (int i = 0; i < inpArraySize; i++)
	{
		if (inpArray[i] != inpArray[i+1])
		{
			outArray[outArrayIndex] = inpArray[i];
			outArrayIndex++;
		}
	}

	cout << "Input Array: ";
	for (int i = 0; i < inpArraySize; i++)
	{
		cout << inpArray[i] << " ";
	}

	cout << endl << "Output Array: ";
	for (int i = 0; i < outArrayIndex; i++)
	{
		cout << outArray[i] << " ";
	}
}



int main()
{
	int inpArr[SIZE] = {50, 60, 70, 70, 72, 80, 85, 85, 90, 100};
	int outArrSize = numUnique(inpArr, SIZE);

	int outArr[outArrSize];

	removeDup(inpArr, SIZE, outArr);
}