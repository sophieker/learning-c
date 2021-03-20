#include <iostream>
using namespace std;

int main()
{
	double length, width, height, surface_area;
	cout << "Enter the length, width, and height: ";
	cin >> length >> width >> height;

	surface_area = length * width + width * height + length * height;
	cout << "The surface area is: " << surface_area;

}