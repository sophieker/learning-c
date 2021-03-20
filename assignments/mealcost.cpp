#include <iostream>
using namespace std;

int main() {
  double meal, tax, tip, total;
  cout << "Enter your meal cost: ";
  cin >> meal;
  cout << "Enter the tax rate: ";
  cin >> tax;
  cout << "Enter the tip percent: ";
  cin >> tip;

  tax = meal * tax * 0.01;
  tip = meal * tip * 0.01;
  total = meal + tip + tax;
 
  cout << "\nMeal Cost: $" << meal << endl;
  cout << "Tax : $" << tax << endl;
  cout << "Tip : $" << tip << endl;
  cout << "Total Cost: $" << total << endl;
  return 0;
}

