#pragma once
#include <iostream>

class Semester
{
private:
	int numPrograms;
	int weightPercentProgram;
	int numTests;
	int weightPercentTests;
	int numFinalExams;
	int weightPercentFinalExams;


public:
	Semester();
	void setUpSemestre();
	void printSemester();
	int getNumTest();
	int getNumPrograms();
	int getFinalExam();
	~Semester();
};

