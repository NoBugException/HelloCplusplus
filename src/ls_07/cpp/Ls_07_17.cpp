#include "Ls_07_17.h"

int Ls_07_17::avg(int a,int b)
{
    return (a+b)/2;
}


void Ls_07_17::printChar()
{
    int i,j,iResult;
    i=10;
    j=30;
    iResult=avg(i,j);
    cout << iResult <<endl; 
}
