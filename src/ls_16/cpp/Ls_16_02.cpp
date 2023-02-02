#include "Ls_16_02.h"
#include <fstream>

void Ls_16_02::printChar()
{
    ofstream ofile;
	cout << "Create file1" << endl;
	ofile.open("C:\\Users\\94317\\vscode\\HelloCplusplus\\src\\ls_16\\test.txt");
	if(!ofile.fail())
	{
		ofile << "name1" << " ";
		ofile << "sex1" << " ";
		ofile << "age1";
        ofile.flush();
		ofile.close();
		cout << "Create file2" <<endl;
		ofile.open("C:\\Users\\94317\\vscode\\HelloCplusplus\\src\\ls_16\\test2.txt");
		if(!ofile.fail())
		{
			ofile << "name2" << " ";
			ofile << "sex2" << " ";
			ofile << "age2";
            ofile.flush();
			ofile.close();
		}
	}
}