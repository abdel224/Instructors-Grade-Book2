#include "Semester.h"
#include <iostream>
#include <string>
using namespace std;



Semester::Semester()
{
	int numPrograms = 0;
	int weightPercentProgram = 0;
	int numTests = 0;
	int weightPercentTests = 0;
	int numFinalExams = 0;
	int weightPercentFinalExams = 0;
}

void Semester::setUpSemestre()
{
	//Define the semester content
	cout << "How many programming assignments(range 0-6)?" << endl;
	cin >> numPrograms;
	cout << "What is the relative weight of the programs? " << endl;
	cin >> weightPercentProgram;
	cout << "How many numbers of tests(range 0-4)?" << endl;
	cin >> numTests;
	cout << "What is the relative weight of the tests? " << endl;
	cin >> weightPercentTests;
	cout << "Will there be final exams(If yes enter 1 if not enter 0)?" << endl;
	cin >> numFinalExams;
	cout << "What is the relative weight of the final exam? " << endl;
	cin >> weightPercentFinalExams;

	this->numPrograms = numPrograms;
	this->weightPercentProgram = weightPercentProgram;
	this->numTests = numTests;
	this->weightPercentTests = weightPercentTests;
	this->numFinalExams = numFinalExams;
	this->weightPercentFinalExams = weightPercentFinalExams;
}

void Semester::printSemester()
{
	//Print information of the semester in the report
}

int Semester::getNumTest() const
{
	return numTests;
}

int Semester::getNumPrograms() const
{
	return numPrograms;
}

int Semester::getFinalExam() const
{
	return numFinalExams;
}

void Semester::setNumTest(int newNumTest)
{
	numTests = newNumTest;
}

void Semester::setNumPrograms(int newNumProgram)
{
	numPrograms = newNumProgram;
}

void Semester::setFinalExam(int newNumFinalExam)
{
	numFinalExams = newNumFinalExam;
}

Semester::~Semester()
{

}
