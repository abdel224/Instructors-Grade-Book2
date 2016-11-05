#pragma once
#include "StudentType.h"
struct NodeType;

class UnsortedType
{
public:
	UnsortedType();
	// Constructor
	~UnsortedType();
	// Destructor
	void MakeEmpty();
	// Function: Returns the list to the empty state.
	// Post:  List is empty.
	bool IsFull() const;
	// Function:  Determines whether list is full.
	// Pre:  List has been initialized.
	// Post: Function value = (list is full)

	int GetLength() const;
	// Function: Determines the number of elements in list.
	// Pre:  List has been initialized.
	// Post: Function value = number of elements in list

	StudentType GetStudent(StudentType& Student, bool& found);
	// Function: Retrieves list element whose key matches Student's key (if
	//           present).
	// Pre:  List has been initialized.
	//       Key member of Student is initialized.
	// Post: If there is an element someStudent whose key matches
	//       Student's key, then found = true and someStudent is returned;	
	// 	 otherwise found = false and Student is returned.
	//       List is unchanged.

	void PutStudent(StudentType Student);
	// Function: Adds Student to list.
	// Pre:  List has been initialized.
	//       List is not full.
	//       Student is not in list.
	// Post: Student is in list.

	void DeleteStudent(StudentType Student);
	// Function: Deletes the element whose key matches Student's key.
	// Pre:  List has been initialized.
	//       Key member of Student is initialized.
	//       One and only one element in list has a key matching Student's key.
	// Post: No element in list has a key matching Student's key.

	void ResetList();
	// Function: Initializes current position for an iteration through the list.
	// Pre:  List has been initialized.
	// Post: Current position is prior to list.

	StudentType GetNextStudent();
	// Function: Gets the next element in list.
	// Pre:  List has been initialized and has not been changed since last call.
	//       Current position is defined.
	//       Element at current position is not last in list.
	//	     
	// Post: Current position is updated to next position.
	//       Student is a copy of element at current position.

private:
	NodeType* listData;
	int length;
	NodeType* currentPos;
};



