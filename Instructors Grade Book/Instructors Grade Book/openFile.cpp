#include "openFile.h"



openFile::openFile()
{
	inputFile.open("grades.txt");
}


openFile::~openFile()
{
}

void openFile::output()
{
	outputFile.open("Grades.txt");
}
