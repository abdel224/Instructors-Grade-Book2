#include "Student.h"
#include <iostream>;
using namespace std;


Student::Student()
{
	lastName = "";
	firstName = "";
	studentNumber = 0;
	gradeProgrammingPercent = 0;
	gradeTestPercent = 0;
	gradeFinalTestPercent = 0;

}

void Student::setStudent()
{
	string studentLastName;
	string studentFirstName;
	int studentNumbers = 0;
	string addMoreStudent;

	cout << "Enter the Student Last Name:" << endl;
	cin >> studentLastName;
	cout << "Enter the Student First Name: ";
	cin >> studentFirstName;
	cout << "What is the student number(1-9999)" << endl;
	cin >> studentNumbers;


	this->lastName = studentLastName;
	this->firstName = studentFirstName;
	this->studentNumber = studentNumbers;

}

void Student::studentGrades(float gradeProgrammingPercent, float gradeTestPercent, float gradeFinalTestPercent)
{
	this->gradeProgrammingPercent = gradeProgrammingPercent;
	this->gradeTestPercent = gradeTestPercent;
	this->gradeFinalTestPercent = gradeFinalTestPercent;
}

void Student::printStudentRecord()
{
	//Prints the Student record
}


Student::~Student()
{

}




