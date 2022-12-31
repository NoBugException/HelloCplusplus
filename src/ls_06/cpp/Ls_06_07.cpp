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
