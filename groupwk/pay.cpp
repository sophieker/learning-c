#include <iostream>
using namespace std;

int main() {
  char uppercase_input, lowercase_input;
  cout << "Enter an uppercase letter: ";
  cin >> uppercase_input;
  int number1;
  number1 = uppercase_input;
  number1 = number1 + 32;
  char lowercase_output = number1;
  cout << "Lowercase Version: " << lowercase_output;
  
  cout << "\nEnter a lowercase letter: ";  
  cin >> lowercase_input;
  int number2;
  number2 = lowercase_input;
  number2 = number2 - 32;
  char uppercase_output = number2;
  cout << "Uppercase Version: " << uppercase_output;

// Alternative Method for Lowercase to Uppercase

  cout << "\nEnter a lowercase letter: ";
  cin >> lowercase_input;
  char upper_output = lowercase_input - 32;
  cout << "uppercase: " << upper_output;
}