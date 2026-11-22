#include <iostream>
#include <string>

using namespace std;

class Student
{
	public:
		string name;
		
		void setMarks(int m)
		{
			if (m >= 0 && m <= 100)
			{
				marks = m;
			}
			else
			{
				cout << "Invalid marks!" << endl;
			}
		}
		
		int getMarks()
		{
			return marks;
		}
		
		char getGrade()
		{
			if (marks >= 80)
			{
				return 'A';
			}
			else if (marks >= 60 && marks <= 79)
			{
				return 'B';
			}
			else if (marks >= 50 && marks <= 59)
			{
				return 'C';
			}
			else
			{
				return 'F';
			}
		}
		
		
	private:
		int marks;	
	
};

int main(void)
{
	Student std1;
	std1.name = "Ubaid";
	
	std1.setMarks(120);
	std1.setMarks(85);
	int marks = std1.getMarks();
	


	
	cout << "Name: " << std1.name << endl;
	cout << "marks: " << marks << endl;
	cout << "Grade: " << std1.getGrade();
}

// error because marks is private variable, so can not be accessed in main
