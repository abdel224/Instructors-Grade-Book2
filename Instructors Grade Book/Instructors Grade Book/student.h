#pragma once
#include<iostream>
#include <string>
using namespace std;

struct nodePrograms;
struct nodeTest;
struct nodeFinalExam;

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

	void studentProgramsGrades();

	void studentTestGrades();

	void studentFinalExamGrade();

	void computeStudentGrade();

	void printStudentRecord();

	~Student();
};


