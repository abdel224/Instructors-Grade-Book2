// The following definitions go into file StudentType.cpp. 
#include <fstream>
#include <iostream>
#include "StudentType.h"

StudentType::StudentType()
{
	//intializing to zero in default constructor
	int newStudentNumberc= 0;
}

StudentType::StudentType(string firstName, string lastName, int StudentNumber)
{
	newFirstName = firstName;
	newLastName = lastName;
	newStudentNumber = StudentNumber;
}

StudentType::~StudentType()
{
}

string StudentType::getFirstName() const
{
	return newFirstName;
}

string StudentType::getLastName() const
{
	return newLastName;
}

int StudentType::getStudentNumber() const
{
	return newStudentNumber;
}

void StudentType::setFirstName(string firstName)
{
	newFirstName = firstName;
}

void StudentType::setLastName(string lastName)
{
	newLastName = lastName;
}

void StudentType::setStudentNumber(int StudentNumber)
{
	newStudentNumber = StudentNumber;
}
