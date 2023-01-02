#include "Ls_08_06.h"

void Ls_08_06::ShowStuctMessage(struct n_Ls_08_06::PersonInfo *pInfo)
{
    cout << pInfo->index << endl;
    cout << pInfo->name << endl;
    cout << pInfo->age<< endl;

}

void Ls_08_06::printChar()
{
    n_Ls_08_06::PersonInfo pInfo;
    pInfo.index=1;
    strcpy(pInfo.name,"张三");
    pInfo.age=20;
    ShowStuctMessage(&pInfo);
}
