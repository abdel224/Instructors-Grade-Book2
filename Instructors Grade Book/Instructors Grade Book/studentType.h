// The following declarations and definitions go into file 
// StudentType.h. 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class StudentType
{
public:
	//default constructor
	StudentType();

	//overload constructor
	StudentType(string, string, int);

	//destructor
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
	//member variables
	string newFirstName;
	string newLastName;
	int newStudentNumber;

};
