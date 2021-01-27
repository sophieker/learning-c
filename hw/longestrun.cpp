#include <iostream>
#include <cstring> 
using namespace std;

int main() {
  int longestRun = 0, currentInt, previousNumber, storedlargest;
  int longestRunTemp = 0;
  char another;
  bool define = false;
  previousNumber = 0;
  while (define == false) {
    cout << "Enter an integer: " << endl;
    cin >> currentInt;
    if (currentInt == previousNumber) {
      longestRun += 1;
    } else {
      previousNumber = currentInt;
    }
    
    if (longestRun > longestRunTemp)
      {
        longestRunTemp = longestRun; 
      }

    cout << "Is there  another int? (Answer Y or N)" << endl;
    cin >> another;
    if (another == 'N') {
      define = true;
    } else {
      continue;
    }
  }

  
}