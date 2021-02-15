#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	cout << "Fahrenheit" << "   " << "Celsius" << endl;
	// using Fahr as loop increment var
	for(int Fahr = 0; Fahr <= 200; Fahr = Fahr + 20){

		float Cel = (5.0/9) * (Fahr - 32);
		cout << fixed << setprecision(1) << setw(4) << Fahr << setw(15) << Cel << endl;	

	}
	
}
