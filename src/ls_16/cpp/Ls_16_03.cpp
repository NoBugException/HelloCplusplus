#include "Ls_16_03.h"
#include <fstream>

void Ls_16_03::printChar()
{
	char buf[128];
	ofstream ofile("C:\\Users\\94317\\vscode\\HelloCplusplus\\src\\ls_16\\test3.txt");
	for(int i=0;i<5;i++)
	{
		memset(buf,0,128);
		cin >> buf;
		ofile << buf;
	}
	ofile.close();
	ifstream ifile("C:\\Users\\94317\\vscode\\HelloCplusplus\\src\\ls_16\\test3.txt");
	while(!ifile.eof())
	{
		char ch;
		ifile.get(ch);
		if(!ifile.eof())
			cout << ch;
	}
	cout << endl;
	ifile.close();
}