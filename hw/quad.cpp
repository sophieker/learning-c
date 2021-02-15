#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, x1, x2, discr;

	cout << "a = ";
	cin >> a;
	cout  << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	discr = b*b - 4*a*c;

	if (discr > 0)
	{
		x1 = (-b + sqrt(discr))/(2*a);
		x2 = (-b - sqrt(discr))/(2*a);
		cout << "The equation has two solutions, " << x1  << " and " << x2 << ".";
	}
	else if (discr == 0) {
		x1 = (-b + sqrt(discr))/(2*a); 	
		cout << "The equation has one solution, " << x1   << ".";
	}
	
	else 
		cout << "The equation has no real solutions. ";


}