#include "StudentLinkedList.h"
#include "Student.h"
#include <iostream>
using namespace std;



StudentLinkedList::StudentLinkedList()
{
}

//Verify if the record is Empty
bool StudentLinkedList::isEmpty(nodePrograms *head)
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

void StudentLinkedList::InsterFirstProgramGrade(nodePrograms *& head, nodePrograms *& last, float number)
{
	//Pointer to the New Node
	nodePrograms *tempProgram = new nodePrograms;
	//Programing Grade Nodes
	cout << "Enter Student Programing Grade Percent(Example 80%):  " << endl;
	cin >> gradeProgrammingPercent;
	tempProgram->dataPrograms = number;
	tempProgram->next = NULL;
	head = tempProgram;
	last = tempProgram;

}

void StudentLinkedList::InsterProgramGrade(nodePrograms *& head, nodePrograms *& last, float number)
{
	int programs;
	int size;
	int i = 0;

	//This gets the numbers of programs define by the user and asign them to the new variables.
	Semester numPrograms;
	programs = numPrograms.getNumPrograms();

	if (isEmpty(head))
	{
		InsterFirstProgramGrade(head, last, number);

		for (size = programs; i < size - 1; i++)
		{
			//Pointer to the New Node
			nodePrograms *temp = new nodePrograms;
			//Programing Grade Nodes
			cout << "Enter Next Student Programing Grade Percent(Example 80%):  " << endl;
			cin >> gradeProgrammingPercent;
			temp->dataPrograms = number;
			temp->next = NULL;
			last->next = temp;
			last = temp;
		}

		InsterLastProgramGrade(head, last, number);
	}
	else
	{
		for (size = programs; i < size - 1; i++)
		{
			//Pointer to the New Node
			nodePrograms *temp = new nodePrograms;
			//Programing Grade Nodes
			cout << "Enter Next Student Programing Grade Percent(Example 80%):  " << endl;
			cin >> gradeProgrammingPercent;
			temp->dataPrograms = number;
			temp->next = NULL;
			last->next = temp;
			last = temp;
		}

		InsterLastProgramGrade(head, last, number);
	}
}

void StudentLinkedList::InsterLastProgramGrade(nodePrograms *& head, nodePrograms *& last, float number)
{
	//Pointer to the New Node
	nodePrograms *temp = new nodePrograms;
	//Programing Grade Nodes
	cout << "Enter Last Student Programing Grade Percent(Example 80%):  " << endl;
	cin >> gradeProgrammingPercent;
	temp->dataPrograms = number;
	temp->next = NULL;
	last->next = temp;
	last = temp;
}

void StudentLinkedList::RemoveProgramGrade(nodePrograms *&head, nodePrograms *&last)
{
	if (isEmpty(head))
	{
		cout << "Record File is Empty" << endl;
	}
	else if (head == last)
	{
		delete head;
		head = NULL;
		last = NULL;
	}
	else
	{
		nodePrograms *tempProgram = head;
		head = head->next;
		delete tempProgram;
	}
}

void StudentLinkedList::InsterFirstTestGrade(nodeTest *&headTest, nodeTest *&lastTest, float number)
{
	//Pointer to the New Node
	nodeTest *tempTest = new nodeTest;
	//Programing Grade Nodes
	cout << "Enter Student Test Grade Percent(Example 80%):  " << endl;
	cin >> gradeProgrammingPercent;
	tempTest->dataTest = number;
	tempTest->next = NULL;
	headTest = tempTest;
	lastTest = tempTest;

}

void StudentLinkedList::InsterTestGrade(nodeTest *& headTest, nodeTest *& lastTest, float number)
{
	int programs;
	int size;
	int i = 0;

	//This gets the numbers of programs define by the user and asign them to the new variables.
	Semester numTest;
	programs = numTest.getNumTest();

	if (isEmpty(head))
	{
		InsterFirstProgramGrade(head, last, number);

		for (size = programs; i < size - 1; i++)
		{
			//Pointer to the New Node
			nodeTest *tempTest = new nodeTest;
			//Programing Grade Nodes
			cout << "Enter Next Student Programing Grade Percent(Example 80%):  " << endl;
			cin >> gradeTestPercent;
			tempTest->dataTest = number;
			tempTest->next = NULL;
			lastTest->next = tempTest;
			lastTest = tempTest;
		}

		InsterLastTestGrade(headTest, lastTest, number);
	}
	else
	{
		for (size = programs; i < size - 1; i++)
		{
			//Pointer to the New Node
			nodePrograms *temp = new nodePrograms;
			//Programing Grade Nodes
			cout << "Enter Next Student Programing Grade Percent(Example 80%):  " << endl;
			cin >> gradeProgrammingPercent;
			temp->dataPrograms = number;
			temp->next = NULL;
			last->next = temp;
			last = temp;
		}

		InsterLastTestGrade(headTest, lastTest, number);
	}
}

void StudentLinkedList::InsterLastTestGrade(nodeTest *& headTest, nodeTest *& lastTest, float number)
{
	//Pointer to the New Node
	nodeTest *tempTest = new nodeTest;
	//Programing Grade Nodes
	cout << "Enter Last Student Test Grade Percent(Example 80%):  " << endl;
	cin >> gradeProgrammingPercent;
	tempTest->dataTest = number;
	tempTest->next = NULL;
	headTest = tempTest;
	lastTest = tempTest;
}

void StudentLinkedList::RemoveTestGrade(nodeTest *&head, nodeTest *&last)
{
	
}

void StudentLinkedList::InsterFinalExamGrade(nodeFinalExam *& head, nodeFinalExam *& last, float number)
{
}

void StudentLinkedList::RemoveFinalExamGrade(nodeFinalExam *&head, nodeFinalExam *&last)
{
}

void StudentLinkedList::PrintGrade(node *current)
{
}


StudentLinkedList::~StudentLinkedList()
{
}
