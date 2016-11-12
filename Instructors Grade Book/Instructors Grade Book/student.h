#pragma once
#include<iostream>
#include <string>
#include "Semester.h"
using namespace std;

struct nodePrograms {
	float dataPrograms;
	nodePrograms *next;
};

struct nodeTest {
	float dataTest;
	nodeTest *next;
};

struct nodeFinalExam {
	float dataFinalExam;
	nodeFinalExam *next;
};

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
	nodePrograms *head;


public:

	Student();
	bool isEmpty(nodePrograms * head);
	void setStudent();
	void studentProgramsGrades();
	void studentTestGrades();
	void studentFinalExamGrade();
	void computeStudentGrade();
	void printStudentRecord();

	~Student();
};


