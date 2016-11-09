// Instructors Grade Book.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <vector>
#include <cmath>
//This is to create Student Object
#include "Student.h" 
#define _USE_MATH_DEFINES

using namespace std;

void addStudent();

void menuOptions();

int openFile(ofstream& resultFile);

void semesterContent();

int main() {
	string option; // user's entered option will be saved in this variable
	string addMoreStudent;

	char lastName;
	char firstName;
	int studentNumber;
	float gradeProgrammingPercent;
	float gradeTestPercent;
	float gradeFinalTestPercent;


	string menuOption;

	cout << "***********************************" << endl;
	cout << "Instructors Grade Book" << endl;
	cout << "***********************************" << endl;
	//Displaying Options for the menu
	cout << "Is this a new semester?" << endl;
	cout << "(Y/N): ";
	//Prompting user to enter an option according to menu
	cin >> option;  // taking option value as input and saving in variable "option"

	if (option == "Y" || option == "yes" || option == "y")
	{
		//Intialize "grades.dat" and grades data structure to empty state
		semesterContent();

		//Ask if it wants to add a student
		cout << "Would you like to add a student now?" << endl;
		cin >> addMoreStudent;

		/*		do while (addMoreStudent == "y" || "Y" || 'yes' || 'YES')
		{
		Student newStudent;
		char addStudentGrade;

		addStudent();

		cout << "Would you like to add the student grades now? (Y or N)";
		cin >> addStudentGrade;

		//Adds the Student Grades to the Record
		if (addStudentGrade == 'Y' || 'y' || 'yes')
		{
		cout << "Enter Student Programing Grade Percent:  (Example 80%)";
		cin >> gradeProgrammingPercent;
		cout << "Enter Student Test Grade Percent:  (Example 80%)";
		cin >> gradeTestPercent;
		cout << "Enter Student Final Grade Percent:  (Example 80%)";
		cin >> gradeFinalTestPercent;

		//Print information in the record

		}
		else
		{
		//Print the information in the record
		addMoreStudent = 'N';
		}

		cout << "Would you like to add another student grades now? (Y or N)";
		cin >> addStudentGrade;

		}*/

		if (addMoreStudent == "Y" || addMoreStudent == "yes" || addMoreStudent == "y")
		{
			//Creates the Student information Record
			Student newStudent;
			char addStudentGrade;

			addStudent();

			cout << "Would you like to add the student grades now? (Y or N)";
			cin >> addStudentGrade;

			//Adds the Student Grades to the Record
			if (addStudentGrade == 'Y' || 'y' || 'yes')
			{
				cout << "Enter Student Programing Grade Percent:  (Example 80%)";
				cin >> gradeProgrammingPercent;
				cout << "Enter Student Test Grade Percent:  (Example 80%)";
				cin >> gradeTestPercent;
				cout << "Enter Student Final Grade Percent:  (Example 80%)";
				cin >> gradeFinalTestPercent;

				//Print information in the record
			}
			else
			{
				//Print the information in the record
			}

		}
		else
		{

			//Continues to the Option menu
			menuOptions();

		}

		//añadir preguntas para saber si se quiere añadir mas estudiantes
		//dependiendo contestacion sale o se queda en loop
	}

	else if (option == "N" || option == "no" || option == "n")
	{
		//Open "grades.dat" file
		//Llamar una funcion(validateSetup) para verficar si el semestre ya se definio
		menuOptions();
	}

	menuOptions();

	system("pause");
	return 0;
}

void addStudent()
{
	string studentLastName;
	string studentFirstName;
	int studentNumbers = 0;
	string addMoreStudent;

	cout << "Enter the Student Last Name:" << endl;
	cin >> studentLastName;
	//Validates that Student name is not left blank
	if (studentLastName == "")
	{
		cout << "Please enter the student last name" << endl;
	}
	else
	{
		//Store the student name
	}

	cout << "Enter the Student First Name: ";
	cin >> studentFirstName;
	//Validates that Student name is not left blank
	if (studentFirstName == "")
	{
		cout << "Please enter the student First Name" << endl;
	}
	else
	{
		//Store the student name
	}

	cout << "What is the student number(1-9999)" << endl;
	cin >> studentNumbers;
	//VAlidates that Student number is not left blank
	if (studentNumbers == 0)
	{
		cout << "Please enter the student name" << endl;
	}
	else
	{
		//Store the Student number
	}

}

void menuOptions()
{
	string menuOption;
	cout << "***********************************" << endl;
	cout << "What would you like to do?" << endl;
	cout << "***********************************" << endl;
	cout << "A(Add Student)" << endl;
	cout << "P(Record programming assignment grade for students)" << endl;
	cout << "T(Record test grade for students)" << endl;
	cout << "F(Record Final exam grade for students)" << endl;
	cout << "C(Change a grade for a particular student)" << endl;
	cout << "G(Calculate final grade)" << endl;
	cout << "O(Output the grade data)" << endl;
	//hacer funcion para saber en que orden se va imprimir
	cout << "Q(Quit and save all data)" << endl;
	cin >> menuOption;

}

int openFile(ofstream& resultFile)
{

	resultFile.open("Grades.dat");

	return 0;

}

void semesterContent()
{
	int numPrograms = 0;
	int weightPercentProgram = 0;
	int numTests = 0;
	int weightPercentTests = 0;
	int numFinalExams = 0;
	int weightPercentFinalExams = 0;

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


}

#include <iostream>
#include <string>
#include <fstream>
#include "mainMenu.h";
using namespace std;

int main2() {
	mainMenu menu;
	char answer = ' ';

	do {

		menu.print();

		cin >> answer;
		system("cls");

		if (toupper(answer) == 'S')
		{
			cout << "Set up for new semester.";
			cout << endl;
			system("pause");
			system("cls");
		}
		else if (toupper(answer) == 'A')
		{
			cout << "Add a student.";
			cout << endl;
			system("pause");
			system("cls");
		}
		else if (toupper(answer) == 'P')
		{
			cout << "Record programming assignment grade for all students.";
			cout << endl;
			system("pause");
			system("cls");
		}
		else if (toupper(answer) == 'T')
		{
			cout << "Record test grade for all students.";
			cout << endl;
			system("pause");
			system("cls");
		}
		else if (toupper(answer) == 'F')
		{
			cout << "Record Final exam grade for all students.";
			cout << endl;
			system("pause");
			system("cls");
		}
		else if (toupper(answer) == 'C')
		{
			cout << "Change a grade for a particular student.";
			cout << endl;
			system("pause");
			system("cls");
		}
		else if (toupper(answer) == 'G')
		{
			cout << "Calculate final grade";
			cout << endl;
			system("pause");
			system("cls");
		}
		else if (toupper(answer) == 'O')
		{
			cout << "Output the grade data";
			cout << endl;
			system("pause");
			system("cls");
		}

	} while (toupper(answer) != 'Q');

	system("pause");
	return 0;
}


