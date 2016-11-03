#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <vector>
#include <cmath>
#define _USE_MATH_DEFINES

using namespace std;

void addStudent();

void menuOptions();

int openFile(ofstream& resultFile);

int main() {
	string option; // user's entered option will be saved in this variable
	int numPrograms = 0;
	int weightPercentProgram = 0;
	int numTests = 0;
	int weightPercentTests = 0;
	int numFinalExams = 0;
	int weightPercentFinalExams = 0;

	//Comment

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
		addStudent();
		//añadir preguntas para saber si se quiere añadir mas estudiantes
		//dependiendo contestacion sale o se queda en loop
	}

	else if (option == "N" || option == "no" || option == "n")
	{
		//Open "grades.dat" file
		//Llamar una funcion(validateSetup) para verficar si el semestre ya se definio
		menuOptions();
	}

	system("pause");
	return 0;
}

void addStudent()
{
	string studentNames;
	int studentNumbers = 0;

	cout << "What  is the name of the student (last name, first name)" << endl;
	cin >> studentNames;

	cout << "What is the student number(1-9999)" << endl;
	cin >> studentNumbers;
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