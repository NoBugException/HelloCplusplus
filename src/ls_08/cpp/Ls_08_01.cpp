#include "Ls_08_01.h"

void Ls_08_01::printChar()
{
    struct PersonInfo
    {
        int index;
        char name[30];
        short age;
    } pInfo;
    pInfo.index=0;
    strcpy(pInfo.name,"张三");
    pInfo.age=20;
    cout << pInfo.index << endl;
    cout << pInfo.name << endl;
    cout << pInfo.age << endl;
}
