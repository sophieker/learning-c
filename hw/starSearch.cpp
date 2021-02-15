#include <iostream>
using namespace std;

// fucntion prototypes
void getJudgeData(double& score);
double calcScore(double s1, double s2, double s3, double s4, double s5);
double findLowest(double s1, double s2, double s3, double s4, double s5);
double findHighest(double s1, double s2, double s3, double s4, double s5);

// user input judge score
void getJudgeData(double& score)
{
	cout << "Enter the judge's score: ";
	cin >> score;

	while ((score < 0) || (score > 10))
	{
		cout << "Invalid input. Please enter again: ";
		cin >> score;
	}
}

// calculate the score by dropping min and max, 
double calcScore(double s1, double s2, double s3, double s4, double s5)
{
	double sum = 0, minimum = 0, maximum = 0;
	int numbers_added = 0;

	minimum = findLowest(s1, s2, s3, s4, s5);
	maximum = findHighest(s1, s2, s3, s4, s5);

	if ((s1 != minimum) && (s1 != maximum)){
		sum += s1;
		numbers_added++;
	}
	if ((s2 != minimum) && (s2 != maximum)){
		sum += s2;
		numbers_added++;
	}
	if ((s3 != minimum) && (s3 != maximum)){
		sum += s3;
		numbers_added++;
	}
	if ((s4 != minimum) && (s4 != maximum)){
		sum += s4;
		numbers_added++;
	}
	if ((s5 != minimum) && (s5 != maximum)){
		sum += s5;
		numbers_added++;
	}

	if (numbers_added !=0){
		return (sum/numbers_added);
	}
	else // all numbers were the same
		return s1;
}

double findLowest(double s1, double s2, double s3, double s4, double s5)
{
	int minimum = 101;
	if (s1 < minimum)
		minimum = s1;
	if (s2 < minimum)
		minimum = s2;
	if (s3 < minimum)
		minimum = s3;
	if (s4 < minimum)
		minimum = s4;
	if (s5 < minimum)
		minimum = s5;

	return minimum; 
}

double findHighest(double s1, double s2, double s3, double s4, double s5)
{
	int maximum = -1;
	if (s1 > maximum)
		maximum = s1;
	if (s2 > maximum)
		maximum = s2;
	if (s3 > maximum)
		maximum = s3;
	if (s4 > maximum)
		maximum = s4;
	if (s5 > maximum)
		maximum = s5;

	return maximum;
}	



int main()
{
	double score1, score2, score3, score4, score5;

	getJudgeData(score1);
	getJudgeData(score2);
	getJudgeData(score3);
	getJudgeData(score4);
	getJudgeData(score5);

	cout << "The average score is: " << calcScore(score1, score2, score3, score4, score5);

}