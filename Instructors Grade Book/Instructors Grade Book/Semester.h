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
	int getNumTest() const;
	int getNumPrograms() const;
	int getFinalExam()const;

	void setNumTest(int);
	void setNumPrograms(int);
	void setFinalExam(int);
	
	~Semester();
};