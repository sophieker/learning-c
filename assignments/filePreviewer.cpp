#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
	fstream inFile;
	string input;
	// string line;
	// int numLines;

	inFile.open("testFile.txt");
	if(inFile.fail())
	{
		cout << "There was an error opening the file." << endl;
		exit(1);
	}

	// counting the number of lines
	//while (getline(inFile, line))
	//	numLines++;

	//inFile.clear();
	//inFile.seekg(0, ios::beg);

	// displaying the file
	getline(inFile, input);
	while(inFile)
	{
		cout << input << endl;
		getline(inFile, input);
	}

	// cout << "num lines: " << numLines;
	
	//if (numLines < 10)
	//{
		cout << "The entire file has been displayed." << endl;
	//}

	inFile.close();
	return 0;

}