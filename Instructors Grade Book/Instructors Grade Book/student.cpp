#include "Student.h"
#include "Semester.h"
#include <iostream>;

using namespace std;



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

bool Student::isEmpty(nodePrograms *head)
{
	if (head == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
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
	nodePrograms *tail;
	//Header of the Node
	//nodePrograms *head;
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
	n->next = NULL;
	tail = n;
	head = n;

	for (size = programs; i < size - 1; i++)
	{
		n = new nodePrograms;
		cout << "Enter next Student Programing Grade Percent(Example 80%):  " << endl;
		cin >> gradeProgrammingPercent;
		n->dataPrograms = gradeProgrammingPercent;
		tail->next = n;
		tail = tail->next;
	}

	n = new nodePrograms;
	cout << "Enter the last Student Programing Grade Percent(Example 80%):  : " << endl;
	cin >> gradeProgrammingPercent;
	n->dataPrograms = gradeProgrammingPercent;
	tail->next = n;
	n->next = NULL;

	while (head != NULL)
	{
		cout << head->dataPrograms << endl;
		head = head->next;
	}
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
	cout << "Enter Student First Test Grade Percent(Example 80%):  " << endl;
	cin >> gradeProgrammingPercent;
	n->dataTest = gradeTestPercent;
	t = n;
	h = n;

	for (size = tests; i < size - 1; i++)
	{
		n = new nodeTest;
		cout << "Enter next Student Test Grade Percent(Example 80%):  " << endl;
		cin >> gradeProgrammingPercent;
		n->dataTest = gradeTestPercent;
		t->next = n;
		t = t->next;
	}

	n = new nodeTest;
	cout << "Enter the last Student Test Grade Percent(Example 80%):  : " << endl;
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

void Student::printStudentRecord(nodePrograms *head)
{
	while (head != NULL)
	{
		cout << head->dataPrograms << endl;
		head = head->next;
	}
	
	if (isEmpty(head))
	{
		cout << "There is no Grades to show" << endl;
	}
	else
	{
		cout << "The gardes are: \n" << endl;
		while (head != NULL)
		{
			cout << head->dataPrograms << endl;
			head = head->next;
		}
	}
}

Student::~Student()
{
	
}




