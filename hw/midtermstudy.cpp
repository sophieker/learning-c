#include <iostream>
using namespace std;

int main()
{
	// convert ft to cm
	double ft;

	cout << "feet: ";
	cin >> ft;

	cout << "cm: " << ft * 30.48 << endl;

	// surface area of rectangle
	double length, width, height, surface_area;
	cout << "Enter the length, width, and height: ";
	cin >> length >> width >> height;

	surface_area = (length * width + width * height + length * height) * 2;
	cout << "The surface area is: " << surface_area << endl;

	//house tax price
	double original_cost, appraised_cost, property_tax;
	cout << "Enter the original cost: ";
	cin >> original_cost; 

	appraised_cost = original_cost * 0.8;
	cout << "Appraised cost: " << appraised_cost << endl;

	property_tax = appraised_cost * 0.07;
	cout << "Property tax: " << property_tax;
}