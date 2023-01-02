#include "Ls_08_05.h"

using namespace n_Ls_08_05;

void Ls_08_05::ShowStuctMessage(struct PersonInfo MyInfo)    //自定义函数，输出结构体变量成员
{
    cout << MyInfo.index << endl;
    cout << MyInfo.name << endl;
    cout << MyInfo.age<< endl;

}

void Ls_08_05::printChar()
{
    PersonInfo pInfo;                        //声明结构体
    pInfo.index=1;
    strcpy(pInfo.name,"张三");
    pInfo.age=20;
    ShowStuctMessage(pInfo);                //调用自定义函数
}
