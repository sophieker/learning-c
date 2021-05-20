#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

const int SIZE = 3;

void print_board(char board[SIZE][SIZE])
{
  cout << "Current board: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << "  [" << board[i][j] << "]";
		}
		cout << endl;
	}
}

bool is_valid_input(int x, int y)
{
  return ((x <= 2 && x >= 0) && (y <= 2 && y >= 0));
}

bool is_space_taken(int x, int y, char board[SIZE][SIZE])
{
  return (board[x][y] != ' ');
}

void get_user_input(char board[SIZE][SIZE])
{
	int x, y;
	cout << "Enter the coordinates of your choice here: ";

  // input validation
  while (true)
  {
  	cin >> x >> y;
    if (!is_valid_input(x, y))
    {
      cout << "Input invalid. X and Y should be between 0 and 2 (e.g. 1 1): ";
      continue;
    }
    if (is_space_taken(x, y, board))
    {
      cout << "Input invalid. Choose an empty spot: ";
      continue;
    }
    break;
  }
	board[x][y] = 'x';
}

void computer_move(char board[SIZE][SIZE])
{
  int x = rand() % 3;
  int y = rand() % 3;
  while(is_space_taken(x, y, board))
  {
    x = rand() % 3;
    y = rand() % 3;
  }
  board[x][y] = 'o';
}

void clear_board(char arr[SIZE][SIZE])
{
  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      arr[i][j] = ' ';
    }
  }
}

bool check_for_win_user(char board[SIZE][SIZE])
{
  // horizontal and vertical
	for (int i = 0; i < SIZE; i++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
		{
      if (board[i][0] == 'x')
        return true;
		}
		else if (board[0][i] == board[1][i] && board[0][i] == board[2][i])
		{
			if (board[0][i] == 'x')
        return true;
		}
	}
  // diagonal 
  if (board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x')
  {
    return true;
  }
  if (board[2][0] == 'x' && board[1][1] == 'x' && board[0][2] == 'x')
  {
    return true;
  }
	return false;
}

bool check_for_win_computer(char board[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
		{
      if (board[i][0] == 'o')
        return true;
		}
		else if (board[0][i] == board[1][i] && board[0][i] == board[2][i])
		{
			if (board[0][i] == 'o')
        return true;
		}
	}
  // diagonal 
  if (board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o')
  {
    return true;
  }
  if (board[2][0] == 'o' && board[1][1] == 'o' && board[0][2] == 'o')
  {
    return true;
  }
	return false;
}

bool is_board_full(char board[SIZE][SIZE])
{
  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      if (board[i][j] == ' ')
      {
        return false;
      }
    }
  }
  return true;
}

int main() {
  char arr[SIZE][SIZE];
  srand(time(NULL));

  clear_board(arr);
  while (true)
  {
    print_board(arr);
    get_user_input(arr);
  
    if (check_for_win_user(arr))
    {
      cout << "User Wins!";
      exit(EXIT_SUCCESS);
    } 
   if (check_for_win_computer(arr))
    {
      cout << "Computer Wins!";
      exit(EXIT_SUCCESS);
   }
   if (is_board_full(arr))
   {
     cout << "Tie!";
     exit(EXIT_SUCCESS);
   }
   computer_move(arr);
  }
}
