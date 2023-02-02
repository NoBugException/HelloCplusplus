#include "Ls_16_07.h"
#include <fstream>

void Ls_16_07::printChar()
{
    ifstream ifile("C:\\Users\\94317\\vscode\\HelloCplusplus\\src\\ls_16\\test4.txt");
    if(!ifile.fail())
    {
        while(!ifile.eof())
        {
            char ch;
            streampos sp = ifile.tellg();
            ifile.get(ch);
            if(ch == ' ' )
            {
                cout << "postion:" << sp ;
                cout <<" is blank "<< endl;
            }
        }
    }
}