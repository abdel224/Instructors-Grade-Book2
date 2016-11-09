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


public:

	Student();

	void setStudent();

	void studentGrades(float gradeProgrammingPercent,
		float gradeTestPercent, float gradeFinalTestPercent);

	void printStudentRecord();

	~Student();
};


