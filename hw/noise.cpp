#include <iostream>
using namespace std;

int main() {
  string output;
  for(int i = 0; i < 1234567; i++)
    output += i;
  cout << output;
}