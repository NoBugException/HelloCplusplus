#include "Ls_08_02.h"

void Ls_08_02::printChar()
{
    struct PERSONINFO
    {
        int index;
        char name[30];
        short age;
    }*pPersonInfo, pInfo= {0,"张三",20};
    pPersonInfo=&pInfo;
    cout << pPersonInfo->index << endl;
    cout << pPersonInfo->name << endl;
    cout << pPersonInfo->age << endl;
}
