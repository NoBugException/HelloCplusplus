#include "Ls_16_05.h"
#include <fstream>

void Ls_16_05::printChar()
{
    fstream file("C:\\Users\\94317\\vscode\\HelloCplusplus\\src\\ls_16\\test4.txt",ios::in);
    if(!file.fail())
    {
        while(!file.eof())
        {
            char buf[128];
            file.getline(buf,128);
            if(file.tellg()>0) // 指针在流中的位置
            {
                cout << buf;
                cout << endl;
            }
        }
    }
    else
        cout << "can not open" << endl;;
    file.close();
}