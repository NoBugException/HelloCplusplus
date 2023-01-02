#include "Ls_07_21.h"

void Ls_07_21::printChar(int argc,char *argv[])
{
    cout << "the list of parameter:" << endl;
    while(argc>1)
    {
        ++argv;
        cout << *argv << endl;
        --argc;
    }
}
