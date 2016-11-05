// This file contains the linked implementation of class
// UnsortedType.

#include "unsortedType.h"
struct NodeType
{
	StudentType info;
	NodeType* next;
};

UnsortedType::UnsortedType()  // Class constructor
{
	length = 0;
	listData = NULL;
}
bool UnsortedType::IsFull() const
// Returns true if there is no room for another StudentType 
//  on the free store; false otherwise.
{
	NodeType* location;
	try
	{
		location = new NodeType;
		delete location;
		return false;
	}
	catch (std::bad_alloc exception)
	{
		return true;
	}
}

int UnsortedType::GetLength() const
// Post: Number of Students in the list is returned.
{
	return length;
}

void UnsortedType::MakeEmpty()
// Post: List is empty; all Students have been deallocated.
{
	NodeType* tempPtr;

	while (listData != NULL)
	{
		tempPtr = listData;
		listData = listData->next;
		delete tempPtr;
	}
	length = 0;
}
void UnsortedType::PutStudent(StudentType Student)
// Student is in the list; length has been incremented.
{
	NodeType* location;			// Declare a pointer to a node

	location = new NodeType;		// Get a new node 
	location->info = Student;		// Store the Student in the node
	location->next = listData;	// Store address of first node 
								//   in next field of new node
	listData = location;		// Store address of new node into
								//   external pointer
	length++;				// Increment length of the list
}

StudentType UnsortedType::GetStudent(StudentType& Student, bool& found)
// Pre:  Key member(s) of Student is initialized.
// Post: If found, Student's key matches an element's key in the 
//       list and a copy of that element has been stored in Student;
//       otherwise, Student is unchanged. 
{
	bool moreToSearch;
	NodeType* location;

	location = listData;
	found = false;
	moreToSearch = (location != NULL);

	while (moreToSearch && !found)
	{
		/*switch ()
		{

		}*/
	}
	return Student;
}

void UnsortedType::DeleteStudent(StudentType Student)
// Pre:  Student's key has been initialized.
//       An element in the list has a key that matches Student's.
// Post: No element in the list has a key that matches Student's.
{
	NodeType* location = listData;
	NodeType* tempLocation;

	// Locate node to be deleted.

	delete tempLocation;
	length--;
}

void UnsortedType::ResetList()
// Post: Current position has been initialized.
{
	currentPos = NULL;
}

StudentType UnsortedType::GetNextStudent()
// Post:  A copy of the next Student in the list is returned.
//        When the end of the list is reached, currentPos
//        is reset to begin again.
{
	StudentType Student;
	if (currentPos == NULL)
		currentPos = listData;
	else
		currentPos = currentPos->next;
	Student = currentPos->info;
	return Student;
}

UnsortedType::~UnsortedType()
// Post: List is empty; all Students have been deallocated.
{
	NodeType* tempPtr;

	while (listData != NULL)
	{
		tempPtr = listData;
		listData = listData->next;
		delete tempPtr;
	}
}





