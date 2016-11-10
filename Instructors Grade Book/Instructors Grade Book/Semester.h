#pragma once
#include <iostream>

class Semester
{
private:
	int numPrograms;
	float weightPercentProgram;
	int numTests;
	float weightPercentTests;
	int numFinalExams;
	float weightPercentFinalExams;


public:
	Semester();
	void setUpSemestre();
	void printSemester();
	int getNumTest() const;
	int setNumTest();
	int setNumTest(int numTests);
	int getNumPrograms();
	int getFinalExam();
	~Semester();
};