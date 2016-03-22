#include <iostream>
#include <string>
using namespace std;

int main()
{
	int testScore;
	char grade;
	string comment;

	//Get the numeric value
	cout << "Enter your test score and I will\n";
	cout << "tell you what letter grade you earned: ";
	cin >> testScore;

	//Determine the letter grade
	if (testScore < 60)
		grade = 'F', comment = "This is not 'F' for -Fantastic!-";
	else if (testScore < 70)
		grade = 'D', comment = "This is not 'D' for -Dude, good enough.-";
	else if (testScore < 80)
		grade = 'C', comment = "This is not 'C' for -Content with this.-";
	else if (testScore < 90)
		grade = 'B', comment = "This is almost 'B' for -Better, yes it can be!-";
	else if (testScore <= 100)
		grade = 'A', comment = "This is 'A' for -Absolutely outstanding!!!-";

	//Display the grades
	cout << "Your grade is " << grade << ".\n";
	//Display extra comment
	cout << comment << ".\n";
	
	return 0;
}