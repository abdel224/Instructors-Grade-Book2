// Instructors Grade Book.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
#include <fstream>
//This is to create Student Object
#include "Student.h" 
#include "Semester.h"
#include "StudentLinkedList.h"
#include "mainMenu.h"
#include "openFile.h"


using namespace std;




int main() {
	string option; // user's entered option will be saved in this variable
	string addStudent;
	mainMenu menu;
	char answer = ' ';
	openFile fileManger;
	

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
		
		//Creates New Semester
		Semester newSemester;
		newSemester.setUpSemestre();

		//Ask if it wants to add a student
		cout << "Would you like to add a student now?: ";
		cin >> addStudent;


		if (addStudent == "Y" || addStudent == "yes" || addStudent == "y" || addStudent == "Yes")
		{
			//Creates the Student
			Student newStudent;
			string addStudentGrade;

			//Setup the Student Information
			newStudent.setStudent();

			//Ask if the user want to add the student grade at the moment
			cout << "Would you like to add the student grades now? (Y or N)";
			cin >> addStudentGrade;

			//Add the Student Grades
			if (addStudentGrade == "Y" || addStudentGrade == "yes" || addStudentGrade == "y" || addStudentGrade == "Yes")
			{
				newStudent.studentProgramsGrades();
				newStudent.studentTestGrades();
				newStudent.studentFinalExamGrade();
				newStudent.computeStudentGrade();
				//Print information in the record
//				newStudent.printStudentRecord(head);
			}
			else
			{
				cout << "Would you like to add another student now? (Y or N)";
				cin >> addStudent;
				//Add loop

				//Print the information in the record
				newStudent.printStudentRecord();
			}

		}
		else
		{
			
			//Continues to the Option menu
			
		}
		menu.print();
		//a�adir preguntas para saber si se quiere a�adir mas estudiantes
		//dependiendo contestacion sale o se queda en loop
	}

	else if (option == "N" || option == "no" || option == "n")
	{
		//Open "grades.dat" file
		//Llamar una funcion(validateSetup) para verficar si el semestre ya se definio
		fileManger.input();
		menu.print();
	}

	menu.print();
	cin >> answer;
	system("cls");

	system("pause");
	return 0;
}



/*int main2() {
	mainMenu menu;
	char answer = ' ';

	do {

		menu.print();

		cin >> answer;
		system("cls");

		if (toupper(answer) == 'S')
		{
			
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
}*/


