#include <iostream
#include <iomanip>
using namespace std;

int main(){
	char choice_input;
	double input_to_won, input_to_yuan;
	cout << "Press W to convert to South Korean Won. Press Y to convert to Chinese Yuan: ";
	cin >> choice_input;
	if(choice_input == 87) {
   		cout << "Enter US Dollar amount: ";
   		cin >> input_to_won;
   		cout << input_to_won << " USD is " << input_to_won * 1172.42 <<" Won";
	} else {
   		cout << "Enter US Dollar amount: ";
   		cin >> input_to_yuan;
   		cout << input_to_yuan << " USD is " << input_to_yuan * 6.76 <<" Yuan";
	}
}