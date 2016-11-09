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
// Returns true if there is no room for another ItemType 
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
// Post: Number of items in the list is returned.
{
	return length;
}

void UnsortedType::MakeEmpty()
// Post: List is empty; all items have been deallocated.
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

void UnsortedType::PutStudent(StudentType student)
// item is in the list; length has been incremented.
{
	NodeType* location;			// Declare a pointer to a node

	location = new NodeType;		// Get a new node 
	location->info = student;		// Store the item in the node
	location->next = listData;	// Store address of first node 
								//   in next field of new node
	listData = location;		// Store address of new node into
								//   external pointer
	length++;				// Increment length of the list
}

//StudentType UnsortedType::GetStudent(StudentType& student, bool& found)
//// Pre:  Key member(s) of item is initialized.
//// Post: If found, item's key matches an element's key in the 
////       list and a copy of that element has been stored in item;
////       otherwise, item is unchanged. 
//{
//	bool moreToSearch;
//	NodeType* location;
//
//	location = listData;
//	found = false;
//	moreToSearch = (location != NULL);
//
//	while (moreToSearch && !found)
//	{
//		switch (student.ComparedTo(location->info))
//		{
//		case LESS:
//		case GREATER: location = location->next;
//			moreToSearch = (location != NULL);
//			break;
//		case EQUAL: found = true;
//			student = location->info;
//			break;
//		}
//	}
//	return student;
//}

//void UnsortedType::DeleteStudent(StudentType student)
//// Pre:  item's key has been initialized.
////       An element in the list has a key that matches item's.
//// Post: No element in the list has a key that matches item's.
//{
//	NodeType* location = listData;
//	NodeType* tempLocation;
//
//	// Locate node to be deleted.
//	if (student.ComparedTo(listData->info) == EQUAL)
//	{
//		tempLocation = location;
//		listData = listData->next;		// Delete first node.
//	}
//	else
//	{
//		while (student.ComparedTo((location->next)->info) != EQUAL)
//			location = location->next;
//
//		// Delete node at location->next
//		tempLocation = location->next;
//		location->next = (location->next)->next;
//	}
//	delete tempLocation;
//	length--;
//}

void UnsortedType::ResetList()
// Post: Current position has been initialized.
{
	currentPos = NULL;
}

StudentType UnsortedType::GetNextStudent()
// Post:  A copy of the next item in the list is returned.
//        When the end of the list is reached, currentPos
//        is reset to begin again.
{
	StudentType item;
	if (currentPos == NULL)
		currentPos = listData;
	else
		currentPos = currentPos->next;
	item = currentPos->info;
	return item;
}

UnsortedType::~UnsortedType()
// Post: List is empty; all items have been deallocated.
{
	NodeType* tempPtr;

	while (listData != NULL)
	{
		tempPtr = listData;
		listData = listData->next;
		delete tempPtr;
	}
}

