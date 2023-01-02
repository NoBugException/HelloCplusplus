#include "Ls_06_07.h"

int Ls_06_07::Add(int x, int y)                //定义第一个重载函数
{
    cout << "int add" << endl;    //输出信息
    return x + y;                //设置函数返回值
}
double Ls_06_07::Add(double x, double y)        //定义第二个重载函数
{
    cout << "double add" << endl;    //输出信息
    return x + y;                //设置函数返回值
}

void Ls_06_07::printChar()
{
    int ivar = Add(5, 2);            //调用第一个Add函数
    float fvar = Add(10.5, 11.4);    //调用第二个Add函数
}