#pragma once
#include<iostream>
#include <string>
using namespace std;

class Student
{
private:
	string lastName;
	string firstName;
	int studentNumber;
	float gradeProgrammingPercent;
	float gradeTestPercent;
	float gradeFinalTestPercent;
	float finalProgrammingGrade;
	float finalTestGrade;


public:

	Student();

	void setStudent();

	void studentGrades();

	void computeStudentGrade();

	void printStudentRecord();

	~Student();
};


