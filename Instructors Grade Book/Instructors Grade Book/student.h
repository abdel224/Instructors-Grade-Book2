#pragma once
#include<iostream>
#include <string>
#include "Semester.h"
using namespace std;

class Student : public Semester
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

	void studentProgramsGrades();

	void studentTestGrades();

	void studentFinalExamGrade();

	void computeStudentGrade();

	void printStudentRecord();

	~Student();
};


