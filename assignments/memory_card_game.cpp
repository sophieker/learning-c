#include <iostream>
#include <time.h>
#include <stdlib.h> 
using namespace std;

int length = 4; // has to be even 

// function prototypes
bool checkForWin(bool** faceup);

void DisplayInstructions()
{
	cout << endl << endl << "INSTRUCTIONS" << endl;
	cout << "---------------------------------------" << endl;
	cout << "1. Enter the row and the column of the" << endl;
	cout << "   card you want to flip." << endl;
	cout << "2. If the cards match, they stay flipped over." << endl;
	cout << "3. The goal is to match all the cards. Good luck!" << endl;
	cout << "---------------------------------------" << endl << endl;
}

void RandomizeCards(int **card_arr, int size)
{
	// initialize all to 0
	for (int row = 0; row < size; row++)
	{
		for (int column = 0; column < size; column++)
		{
			card_arr[row][column] = 0;  
		}
	}

	// random initialization of other numbers
	for (int i = 1; i <= (length*length)/2; i++)
	{
    for (int j = 1; j <= 2; j++)
    {
      int x = rand() % length, y = rand() % length; 
		  int current_pointer = card_arr[x][y];

		  while (current_pointer != 0){ // the spot in the array is already initialized to another value
      		  x = rand() % length;
      		  y = rand() % length; 
			  current_pointer = card_arr[x][y];
		  }

		  card_arr[x][y] = i;
    }
	}

}


void InitializeStars(int **card_arr, int size)
{
    cout << "    ";
    for (int i = 1; i <= length; i++)
    {
      cout << i << " ";
    }
    cout << endl;
    cout << "  ";

    for (int i = 0; i <= length*2; i++)
    {
        cout << "-";
    }
    cout << endl;

    for (int j = 1; j <= length; j++)
    {
        cout << j <<" | ";

        for (int k = 1; k <= length; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

}

void ShowCards(int **card_arr, bool **faceup_arr)
{

	int x1, y1, x2, y2;

	// input and input validation
	while ((x1 > length)||(y1 > length)||(x2 > length)||(y2 > length))
	{
		cout << "Enter the column of the first card: ";
		cin >> x1;

		cout << "Enter the row of the first card: ";
		cin >> y1;

		cout << "Enter the column of the second card: ";
		cin >> x2;

		cout << "Enter the row of the second card: ";
		cin >> y2;
	}

	// fixing for array
	x1--;
	x2--;
	y1--;
	y2--;

	// output cards with user selected cards turned over
   cout << "    ";
    for (int i = 1; i <= length; i++)
    {
      cout << i << " ";
    }
    cout << endl;
    cout << "  ";

    for (int i = 0; i <= length*2; i++)
    {
        cout << "-";
    }
    cout << endl;

    for (int row = 0; row < length; row++)
    {
        cout << row + 1 << " | ";

        for (int column = 0; column < length; column++)
        {
        	// already facing up?
        	if (faceup_arr[row][column] == 1)
        	{
        		cout << card_arr[row][column] << " ";
        	}

        	// if user input matches that location in the array
            else if (((row == y1) && (column == x1)) || ((row == y2) && (column == x2)))
            {
                cout << card_arr[row][column] << " ";
            }

            // user input does NOT match, so card stays down
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    // update bool in array
    if (card_arr[y1][x1] == card_arr[y2][x2])
    {
    	faceup_arr[y1][x1] = 1;
    	faceup_arr[y2][x2] = 1;

    	// check for win
      	if (checkForWin(faceup_arr) == true)
    	{
      		cout << "You won! ";
      		exit(1);
    	}
    	ShowCards(card_arr, faceup_arr);
    }
    else {
    	// check for win
      if (checkForWin(faceup_arr) == true)
   	  {
     	  cout << "You won! ";
      	  exit(1);
      }
    
    	ShowCards(card_arr, faceup_arr);
    }
}

bool checkForWin(bool** faceup)
// function that checks if the cards are already all facing up
{
  for (int row = 0; row < length; row++)
	{
		for (int column = 0; column < length; column++)
		{
			if (faceup[row][column] == 0)
        return false;
		}
	}
  return true;
}


int main()
{

	int** cards; 
	cards = new int *[length];
	for(int i = 0; i < length; i++)
		cards[i] = new int[length];

	bool** faceup;
	faceup = new bool *[length];
	for (int i = 0; i < length; i++)
		faceup[i] = new bool[length];


  // faceup init
  	for (int row = 0; row < length; row++)
	{
		for (int column = 0; column < length; column++)
		{
			faceup[row][column] = 0;  
		}
	}


	srand(time(0));

	DisplayInstructions();
	RandomizeCards(cards, length);

	
/*
  	for (int row = 0; row < length; row++)
	{
		for (int column = 0; column < length; column++)
		{
			cout << cards[row][column] << " " ;
		}
    cout << endl;
	}
*/
	
	
	InitializeStars(cards, length);
	ShowCards(cards, faceup);
	

}

