#pragma once
#include <iostream>
using namespace std;

class StudentLinkedList
{
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

	struct node
	{
		int number;
		node *next;
	};

private:
	string gradeProgrammingPercent;
	string gradeTestPercent;

	nodePrograms *head = NULL;
	nodeTest *headTest = NULL;
	nodeFinalExam *headFinalExam = NULL;

	nodePrograms *last = NULL;
	nodeTest *lastTest = NULL;
	nodeFinalExam *lastFinalExam = NULL;

public:
	StudentLinkedList();
	bool isEmpty(nodePrograms * head);

	void InsterFirstProgramGrade(nodePrograms *&head, nodePrograms *&last, float number);
	void InsterProgramGrade(nodePrograms *&head, nodePrograms *&last, float number);
	void InsterLastProgramGrade(nodePrograms *&head, nodePrograms *&last, float number);
	void RemoveProgramGrade(nodePrograms *&head, nodePrograms *&last);

	void InsterFirstTestGrade(nodeTest *&headTest, nodeTest *&lastTest, float number);
	void InsterTestGrade(nodeTest *&headTest, nodeTest *&lastTest, float number);
	void InsterLastTestGrade(nodeTest *&headTest, nodeTest *&lastTest, float number);
	void RemoveTestGrade(nodeTest *&headTest, nodeTest *&lastTest);

	void InsterFinalExamGrade(nodeFinalExam *&head, nodeFinalExam *&last, float number);
	void RemoveFinalExamGrade(nodeFinalExam *&head, nodeFinalExam *&last);
	void PrintGrade(node *current);
	~StudentLinkedList();
};

