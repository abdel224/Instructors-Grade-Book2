#include "Student.h"
#include <iostream>;

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

Student::Student()
{
	lastName = "";
	firstName = "";
	studentNumber = 0;
	gradeProgrammingPercent = 0;
	gradeTestPercent = 0;
	gradeFinalTestPercent = 0;
	finalProgrammingGrade = 0;
	finalTestGrade = 0;
	Semester numTest;
	Semester numPrograms;
	Semester FinalExamn;

}

void Student::setStudent()
{
	string studentLastName;
	string studentFirstName;
	int studentNumbers = 0;
	string addMoreStudent;

	cout << "Enter the Student Last Name:" << endl;
	cin >> studentLastName;
	cout << "Enter the Student First Name: ";
	cin >> studentFirstName;
	cout << "What is the student number(1-9999)" << endl;
	cin >> studentNumbers;


	this->lastName = studentLastName;
	this->firstName = studentFirstName;
	this->studentNumber = studentNumbers;

}

void Student::studentProgramsGrades()
{
	//New Node
	nodePrograms *n;
	//Pointer to the New Node
	nodePrograms *t;
	//Header of the Node
	nodePrograms *h;
	//Controls the loop
	int size;
	int i = 0;
	int programs;
	
	//This gets the numbers of programs define by the user and asign them to the new variables.
	Semester numPrograms;
	programs =  numPrograms.getNumPrograms();

	//Programing Grade Nodes
	n = new nodePrograms;
	cout << "Enter Student Programing Grade Percent(Example 80%):  " << endl;
	cin >> gradeProgrammingPercent;
	n->dataPrograms = gradeProgrammingPercent;
	t = n;
	h = n;

	for (size = programs; i < size - 1; i++)
	{
		n = new nodePrograms;
		cout << "Enter next Student Programing Grade Percent(Example 80%):  " << endl;
		cin >> gradeProgrammingPercent;
		n->dataPrograms = gradeProgrammingPercent;
		t->next = n;
		t = t->next;
	}

	n = new nodePrograms;
	cout << "Enter the last Student Programing Grade Percent(Example 80%):  : " << endl;
	cin >> gradeProgrammingPercent;
	n->dataPrograms = gradeProgrammingPercent;
	t->next = n;
	n->next = NULL;





	cout << "Enter Student Test Grade Percent(Example 80%):  " << endl;
	cin >> gradeTestPercent;

	//un for loop d nodo

	cout << "Enter Student Final Grade Percent(Example 80%):  " << endl;
	cin >> gradeFinalTestPercent;

	this->gradeProgrammingPercent = gradeProgrammingPercent;
	this->gradeTestPercent = gradeTestPercent;
	this->gradeFinalTestPercent = gradeFinalTestPercent;
}

void Student::studentTestGrades()
{
	//New Node
	nodeTest *n;
	//Pointer to the New Node
	nodeTest *t;
	//Header of the Node
	nodeTest *h;
	//Controls the loop
	int size;
	int i = 0;
	//Stores the number of test of the semester
	int tests;

	//This gets the numbers of test define by the user and asign them to the new variables.
    Semester numTest;
	tests = numTest.getNumTest();


	//Test Grade Nodes
	n = new nodeTest;
	cout << "Enter Student Programing Grade Percent(Example 80%):  " << endl;
	cin >> gradeProgrammingPercent;
	n->dataTest = gradeTestPercent;
	t = n;
	h = n;

	for (size = tests; i < size - 1; i++)
	{
		n = new nodeTest;
		cout << "Enter next Student Programing Grade Percent(Example 80%):  " << endl;
		cin >> gradeProgrammingPercent;
		n->dataTest = gradeTestPercent;
		t->next = n;
		t = t->next;
	}

	n = new nodeTest;
	cout << "Enter the last Student Programing Grade Percent(Example 80%):  : " << endl;
	cin >> gradeProgrammingPercent;
	n->dataTest = gradeTestPercent;
	t->next = n;
	n->next = NULL;
}

void Student::studentFinalExamGrade()
{
	//New Node
	nodeFinalExam *n;
	//Pointer to the New Node
	nodeFinalExam *t;
	//Header of the Node
	nodeFinalExam *h;
	//Stores the number of final exam of the semester
	int finalexam;

	//This gets the numbers of programs define by the user and asign them to the new variables.
	Semester FinalExamn;
	finalexam = FinalExamn.getFinalExam();

	if (finalexam = 1)
	{
		//Programing Grade Nodes
		n = new nodeFinalExam;
		//n = new nodeFinalExam;
		cout << "Enter the Student Final Exam Grade Percent(Example 80%):  " << endl;
		cin >> gradeProgrammingPercent;
		n->dataFinalExam = finalexam;
		t = n;
		h = n;
	}
	else
	{
		//Does not make a Node for this
	}
	

}

void Student::computeStudentGrade()
{

	finalProgrammingGrade = gradeProgrammingPercent * 2;
	finalTestGrade = gradeTestPercent * 2;
}

void Student::printStudentRecord()
{
	//Prints the Student record
}


Student::~Student()
{
	
}




