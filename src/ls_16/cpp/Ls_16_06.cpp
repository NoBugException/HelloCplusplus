#include "Ls_16_06.h"
#include <fstream>

void Ls_16_06::printChar()
{
    char buf[50];
    fstream file;
    file.open("C:\\Users\\94317\\vscode\\HelloCplusplus\\src\\ls_16\\test6.dat",ios::binary|ios::out);
    for(int i=0; i<2; i++)
    {
        memset(buf,0,50);
        cin >> buf;
        file.write(buf,50);
        file << endl;
    }
    file.close();
    file.open("C:\\Users\\94317\\vscode\\HelloCplusplus\\src\\ls_16\\test6.dat",ios::binary|ios::in);
    while(!file.eof())
    {
        memset(buf,0,50);
        file.read(buf,50);
        if(file.tellg()>0)
            cout << buf;
    }
    cout << endl;
    file.close();
}