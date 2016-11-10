#include "openFile.h"



openFile::openFile()
{
	
}


openFile::~openFile()
{
}

void openFile::input()
{
	inputFile.open("grades.txt");
}

void openFile::output()
{
	outputFile.open("Grades.txt");
}
