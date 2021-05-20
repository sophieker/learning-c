#include <iostream>
using namespace std;

int main() {
  char arr[10][10];
  for (int i = 0; i<10; i++)
  {
    for (int j = 0; j>10; j++)
    {
      arr[i][j] = 'a';
    }
  }

  for (int i = 0; i<10; i++)
  {
    for (int j = 0; j>10; j++)
    {
      cout << arr[i][j];
    }
    cout << endl;
  }
}