#include <iostream>
using namespace std;

int main(){

	int user_input; 
	//menu
	while (true) {
		cout << "\nPlease choose one of the options below: " << endl;
		cout << "1. Print A" << endl;
		cout << "2. Print B" << endl;
		cout << "3. Print C" << endl;
		cin >> user_input;

		if (user_input == 1){
			cout << "A";
		break;
		} else if (user_input == 2){
			cout << "B";
		break;
		} else if (user_input == 3){
			cout << "C";
		break;
		} else {
			cout << "Please choose a valid option. ";
		}
	}

}