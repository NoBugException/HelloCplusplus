#include "Ls_16_04.h"
#include <fstream>

void Ls_16_04::printChar()
{
    fstream file("C:\\Users\\94317\\vscode\\HelloCplusplus\\src\\ls_16\\test4.txt", ios::out);
    if(!file.fail())
    {
        cout << "start write " << endl;
        file << "name" << " ";
        file << "sex" << " ";
        file << "age" << endl;
    }
    else
        cout << "can not open" << endl;
    file.close();
}