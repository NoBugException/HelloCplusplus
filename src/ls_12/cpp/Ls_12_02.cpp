#include "Ls_12_02.h"

template<class Type>
Type myMin(Type a,Type b)//定义函数模板
{
    if(a < b)
        return a;
    else
        return b;
}
char* myMin(char* a, char* b)// 重载函数模板
{
    if(strcmp(a,b))
        return b;
    else
        return a;
}
void Ls_12_02::printChar()
{
    cout << "最小值：" << myMin(10,1) << endl;
    cout << "最小值：" << myMin('a','b') << endl;
    cout << "最小值：" << myMin("hi","mr") << endl;
}