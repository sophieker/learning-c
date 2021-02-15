#include <iostream>
#include <cstdlib>
using namespace std;

// vars
int user_choice;
double input_1, input_2;

// function prototypes
void select_menu();
void displayMenu();
void add(double, double);
void subtract(double, double);
void multiply(double, double);

// select option from menu
void select_menu()
	{
		cout << "Please select an option: ";
		cin >> user_choice;

		if (user_choice == 1)
		{
			cout << "Enter 2 numbers: ";
			cin >> input_1 >> input_2;
			add(input_1, input_2);
			cin.ignore();
			cin.get();
			displayMenu();
		}

		else if (user_choice == 2)
		{
			cout << "Enter 2 numbers: ";
			cin >> input_1 >> input_2;
			subtract(input_1, input_2);
			cin.ignore();
			cin.get();
			displayMenu();
		}

		else if (user_choice == 3)
		{
			cout << "Enter 2 numbers: ";
			cin >> input_1 >> input_2;
			multiply(input_1, input_2);
			cin.ignore();
			cin.get();
			displayMenu();
		}

		else if (user_choice == 4)
		{
			exit(0);
		}

		else {
			cout << "Please enter a valid input." << endl;
			select_menu();
		}

	}

// display menu
void displayMenu()
	{
		cout << "MATH TUTOR" << endl;
		cout << "1. addition" << endl;
		cout << "2. subtraction" << endl;
		cout << "3. multiplication" << endl;
		cout << "4. quit the program" << endl;
		select_menu();
	}

// addition
void add(double num1, double num2)
	{
		cout << (num1 + num2) << endl;
	}

// subtraction 
void subtract(double num1, double num2)
	{
		cout << (num1 - num2) << endl;
	}

// multiplication
void multiply(double num1, double num2)
	{
		cout << (num1 * num2) << endl;
	}


int main()
	{
		displayMenu();
	}