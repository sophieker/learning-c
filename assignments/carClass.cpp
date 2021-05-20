#include <iostream>
#include <cstring>
using namespace std;

class Car
{
private:
	int year;
	string make;
	double speed;
public:	
	Car(int y, string m) //constructor
	{
		year = y;
		make = m;
		speed = 0.0;
	}

	int getYear()
	{
		return year;
	}

	string getMake()
	{
		return make;
	}

	double getSpeed()
	{
		return speed;
	}

	void accelerate()
	{
		speed += 5;
	}

	void brake()
	{
		speed -= 5;
	}
};

int main()
{
	Car Tesla(2020, "xx");
	Tesla.accelerate();
	Tesla.accelerate();
	Tesla.brake();
	cout << "Year: " << Tesla.getYear() << endl;
	cout << "make: " << Tesla.getMake() << endl;
	cout << "speed: " << Tesla.getSpeed() << endl;
}



