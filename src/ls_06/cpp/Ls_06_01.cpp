#include "Ls_06_01.h"

void Ls_06_01::ShowMessage()
{
    cout << "HelloWorld!" << endl;
}
void Ls_06_01::ShowAge()
{
    int iAge = 23;
    cout << "age is :" << iAge << endl;
}
void Ls_06_01::ShowIndex()
{
    int iIndex = 10;
    cout << "Index is :" << iIndex << endl;
}

void Ls_06_01::printChar()
{
    ShowMessage(); //函数调用语句
    ShowAge(); //函数调用语句
    ShowIndex(); //函数调用语句
}
