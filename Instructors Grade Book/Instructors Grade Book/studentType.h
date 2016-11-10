// The following declarations and definitions go into file 
// ItemType.h. 
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class StudentType
{
public:
	//default constructor
	StudentType();

	//overload constructor
	StudentType(string, string, int);

	//Destructor
	~StudentType();

	//Accessor Functions
	string getFirstName() const;
	string getLastName() const;
	int getStudentNumber() const;

	//Mutator Functions
	void setFirstName(string);
	void setLastName(string);
	void setStudentNumber(int);

private:
	//Member Variables
	string newFirstName;
	string newLastName;
	int newStudentNumber;

};


