#include "Ls_05_06.h"

void Ls_05_06::printChar()
{
    int ivar = 0;            //定义一个整型变量，初始化为0
    int num = 0;            //定义一个整型变量，初始化为0
label:                      //定义一个标签
    ivar++;                    //ivar自加1
    num += ivar;            //累加求和
    if (ivar < 10)            //判断ivar是否小于100
    {
        goto label;            //转向标签
    }
    cout << num << endl;
}
