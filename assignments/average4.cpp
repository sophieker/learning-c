#include <iostream>
using namespace std;

int main()
{
	int grade1,
		grade2,
		grade3,
		grade4; 
	double avg_grade;

	cout << "Your grades were: " ;
	cin >> grade1 >> grade2 >> grade3 >> grade4;

	avg_grade = (grade1 + grade2 + grade3 + grade4)/4.0;
	cout << "Your average grade is " << avg_grade;

}
