#include <iostream>
using namespace std;

int main() {
  int number, sum, 
      divide_temp; 
  cout << "Enter a 3-digit number: ";
  cin >> number;

  //determine length of number
  unsigned int number_of_digits = 0;

  do {
      ++number_of_digits
      n /= base;
  } while (n);

  int i = number_of_digits;
while(i>0){
  i = i - 1;

}

  sum = number/100;
  number = number % 100;
  sum = sum + number/10;
  number = number % 10;
  sum = sum + number;
  
  cout << "the sum of the digits is " << sum;
}