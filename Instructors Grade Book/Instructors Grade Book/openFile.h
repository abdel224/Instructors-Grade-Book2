#pragma once
#include <fstream>

using namespace std;

class openFile
{
public:
	openFile();
	~openFile();
	void input();
	void output();
	
private:
	ifstream inputFile;	
	ofstream outputFile;
};